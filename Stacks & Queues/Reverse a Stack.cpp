void reverseStack(stack<int> &input, stack<int> &extra) {
    // base case
    if(input.empty()) {
        return;
    }
    
    int temp = input.top();
    input.pop();
    reverseStack(input, extra);
    
    while(!input.empty()){
        extra.push(input.top());
        input.pop();
    }
    
    input.push(temp);
    
    while(!extra.empty()) {
        input.push(extra.top());
        extra.pop();
    }
    
}