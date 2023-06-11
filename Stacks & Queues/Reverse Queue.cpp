include<stack>
#include<queue>

void reverseQueue(queue<int> &input) {
	// Write your code here
    stack<int> helper;
    
    while(!input.empty()) {
        helper.push(input.front());
        input.pop();
    }
    while(!helper.empty()) {
        input.push(helper.top());
        helper.pop();
    }
	return;    
}
