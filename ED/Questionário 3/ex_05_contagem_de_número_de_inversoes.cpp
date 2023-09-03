#include <iostream>
#include <vector>

using namespace std;

class MergeSortInversoes {
private:
    static long mergeSort(vector<int>& arr, vector<int>& temp, int left, int right) {
        long inversions = 0;
        if (left < right) {
            int mid = (left + right) / 2;
            inversions += mergeSort(arr, temp, left, mid);
            inversions += mergeSort(arr, temp, mid + 1, right);
            inversions += merge(arr, temp, left, mid, right);
        }
        return inversions;
    }

    static long merge(vector<int>& arr, vector<int>& temp, int left, int mid, int right) {
        long inversions = 0;
        int i = left;
        int j = mid + 1;
        int k = left;

        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
                inversions += mid - i + 1; 
            }
        }

        while (i <= mid) {
            temp[k++] = arr[i++];
        }

        while (j <= right) {
            temp[k++] = arr[j++];
        }

        for (i = left; i <= right; i++) {
            arr[i] = temp[i];
        }

        return inversions;
    }

public:
    static void main() {
        vector<int> arr = {7, 5, 1, 3, 9, 8, 2, 4, 6, 0};
        vector<int> temp(arr.size());

        long inversions = mergeSort(arr, temp, 0, arr.size() - 1);
        cout << "Número de inversões: " << inversions << endl;
    }
};

int main() {
    MergeSortInversoes::main();
    return 0;
}
