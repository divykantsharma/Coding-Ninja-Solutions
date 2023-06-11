#include<stack>
#include<string>
bool checkRedundantBrackets(string &input) {
	stack<char> st;
    for (auto ch : input) {
        // if current character is close parenthesis ')'
        if (ch == ')') {
            char top = st.top();
            st.pop();
            //if the next char is '(' we have a true result
            bool flag = true;
 
            while (!st.empty() and top != '(') {
 
                if (top == '+' or top == '-' or
                    top == '*' or top == '/')
                    flag = false;
 
                // The top element of stack
                top = st.top();
                st.pop();
            }
            // If there are no operators
            if (flag == true)
                return true;
        }
        else
            st.push(ch); // push open parenthesis '(',
                  // operators and operands to stack
    }
    return false;
}
