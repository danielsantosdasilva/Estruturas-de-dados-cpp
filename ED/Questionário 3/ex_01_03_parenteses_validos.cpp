#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValidString(const string& entrada) {
    stack<char> st;
    bool valid = true;

    for (char c : entrada) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (st.empty()) {
                valid = false;
                break;
            }

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) {
                valid = false;
                break;
            }
        }
    }

    return valid && st.empty();
}

int main() {
    string entrada;
    cin >> entrada;

    if (isValidString(entrada)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}