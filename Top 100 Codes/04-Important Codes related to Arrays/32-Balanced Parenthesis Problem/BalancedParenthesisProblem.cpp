#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isBalanced(const string &expr) {
    stack<char> s;

    // Traverse the string using a normal for loop
    for (int i = 0; i < expr.length(); i++) {
        char ch = expr[i];

        // If it's an opening parenthesis, push it to the stack
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        // If it's a closing parenthesis, check for balance
        else if (ch == ')' || ch == '}' || ch == ']') {
            // If the stack is empty, there's no corresponding opening parenthesis
            if (s.empty()) {
                return false;
            }

            // Pop the top element and check if it matches the current closing parenthesis
            char top = s.top();
            s.pop();
            if ((ch == ')' && top != '(') || 
                (ch == '}' && top != '{') || 
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    // If the stack is empty, all parentheses were balanced
    return s.empty();
}

int main() {
    string expr;
    cout << "Enter the expression: ";
    cin >> expr;

    if (isBalanced(expr)) {
        cout << "The parentheses are balanced." << endl;
    } else {
        cout << "The parentheses are not balanced." << endl;
    }

    return 0;
}
