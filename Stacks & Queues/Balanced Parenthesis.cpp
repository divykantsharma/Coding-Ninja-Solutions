#include <stack>
bool isBalanced(string str) {
    stack<char> s;
	for(int i = 0; i < str.length();i++) {
        if(str[i] == '(' or str[i] == '{' or str[i] == '[') {
            s.push(str[i]);
            continue;
        }
        //if the current character is not the opening parentheses then is must be a closing one, and thus stack cannot be empty
        if(s.empty())
            return false;
        // Now check for the closing parenthesis
        char c;
        switch(str[i]) {
            case ')' : c = s.top();
                	   s.pop();
                	   if(c == '}' or c == ']')
                         return false;
                	   break;
            case '}' : c = s.top();
                	   s.pop();
                	   if(c == ')' or c == ']')
                         return false;
                	   break;   
                
            case ']' : c = s.top();
                	   s.pop();
                	   if(c == ')' or c == '}')
                         return false;
                	   break;  
        }
    }
   return s.empty();
}
