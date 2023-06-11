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
Node *swapNodes(Node *head, int i, int j){
	Node *curr_ptr = head;
    Node *prev_ptr = NULL;
    Node *prev_i = NULL;
    Node *prev_j = NULL;
    Node *curr_i = NULL;
    Node *curr_j = NULL;
    int counter = 0;
    // No swapping in this case
    if(i == j) return head;
    while(curr_ptr) {
        if(counter == i) {
            prev_i = prev_ptr;
            curr_i = curr_ptr;
        } else if (counter == j) {
            prev_j = prev_ptr;
            curr_j = curr_ptr;
        }
        prev_ptr = curr_ptr;
        curr_ptr = curr_ptr -> next;
        counter++;
    }
    
    if(prev_i) {
        prev_i -> next = curr_j;
    } else {
        head = curr_j;
    }
    
    if(prev_j) {
        prev_j -> next = curr_i;
    } else {
        head = curr_i;
    }
    Node *temp = curr_j -> next;
    curr_j -> next = curr_i -> next;
    curr_i -> next = temp;
    return head;
}
