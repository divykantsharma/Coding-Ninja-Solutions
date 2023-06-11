/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
#include<stack>
bool isPalindrome(Node *head){
    //Write your code here
    //corner case
    if(head == NULL) {
        return true;
    }
    Node *ptr = head;
    stack<int> st;
    while(ptr) {
    	st.push(ptr -> data);
        ptr = ptr -> next;
    }
    ptr = head;
    while(ptr) {
    	if(ptr -> data == st.top()) {
        	ptr = ptr -> next;
          st.pop();
        } else {
        	return false;
        }
    }
    return true;
}