#include<stack>
int* stockSpan(int *price, int size) {
	// Write your code here
    stack<int> s; 
    int *output = new int[size]; 
    
    s.push(0); 
    output[0] = 1; 
    
    for(int i = 1; i < size; i++) { 
        // while the condition holds pop from stack
        while(!s.empty() and price[s.top()] < price[i]) {
            s.pop(); 
    	}
        
        // if stack is empty then we have the best price
    	if(s.empty()) {
     	output[i] = i + 1; 
    	} else { 
    		output[i] = i - s.top(); // else the span will be difference between the indices
    	  }
        //push the current index onto stack
    	s.push(i); 
 	} 
    return output;
}
