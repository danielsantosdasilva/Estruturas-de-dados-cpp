#include <iostream>
#include <stack>

using namespace std;

class FilasComPilhas {
    stack<int> stack1;
    stack<int> stack2;

public:
    FilasComPilhas() {
    }

    void push(int x) {
        stack1.push(x);
    }

    int pop() {
        if (stack2.empty()) {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        int element = stack2.top();
        stack2.pop();
        return element;
    }

    int peek() {
        if (stack2.empty()) {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        return stack2.top();
    }

    bool empty() {
        return stack1.empty() && stack2.empty();
    }
};

int main() {

    return 0;
}
