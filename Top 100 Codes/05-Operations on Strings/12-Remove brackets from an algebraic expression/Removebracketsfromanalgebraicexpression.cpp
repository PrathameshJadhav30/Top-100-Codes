#include <iostream>
#include <stack>
using namespace std;

// Function to remove brackets from an algebraic expression
string removeBrackets(string expr) {
    stack<int> signs; // Stack to keep track of signs
    signs.push(1);    // Assume the expression starts with a positive sign
    
    string result = "";
    int sign = 1; // Current sign
    
    for (int i = 0; i < expr.size(); i++) {
        if (expr[i] == '+') {
            result += (sign == 1) ? '+' : '-';
        } 
        else if (expr[i] == '-') {
            result += (sign == 1) ? '-' : '+';
        } 
        else if (expr[i] == '(') {
            if (i > 0 && expr[i - 1] == '-') {
                sign *= -1;
            }
            signs.push(sign);
        } 
        else if (expr[i] == ')') {
            sign = signs.top();
            signs.pop();
        } 
        else {
            result += expr[i];
        }
    }
    
    // Remove leading '+' if present
    if (!result.empty() && result[0] == '+') {
        result = result.substr(1);
    }
    
    return result;
}

// Driver code
int main() {
    string expression;
    cout << "Enter an algebraic expression: ";
    cin >> expression;

    string result = removeBrackets(expression);
    cout << "Expression without brackets: " << result << endl;

    return 0;
}
