#include <iostream>

using namespace std;

class PartitionList {
public:
    struct ListNode {
        int val;
        ListNode* next;
        ListNode(int x) : val(x), next(nullptr) {}
    };

    ListNode* partition(ListNode* head, int x) {
        ListNode* lessHead = new ListNode(0);
        ListNode* less = lessHead;
        ListNode* greaterHead = new ListNode(0);
        ListNode* greater = greaterHead;


        while (head != nullptr) {
            if (head->val < x) {
                less->next = head;
                less = less->next;
            } else {
                greater->next = head;
                greater = greater->next;
            }
            head = head->next;
        }


        greater->next = nullptr;
        less->next = greaterHead->next;

        return lessHead->next;
    }
};

int main() {
    PartitionList::ListNode* node1 = new PartitionList::ListNode(1);
    PartitionList::ListNode* node2 = new PartitionList::ListNode(4);
    PartitionList::ListNode* node3 = new PartitionList::ListNode(3);
    PartitionList::ListNode* node4 = new PartitionList::ListNode(2);
    PartitionList::ListNode* node5 = new PartitionList::ListNode(5);
    PartitionList::ListNode* node6 = new PartitionList::ListNode(2);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;

    PartitionList solution;
    int x = 3;
    PartitionList::ListNode* result = solution.partition(node1, x);


    while (result != nullptr) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;

    return 0;
}
