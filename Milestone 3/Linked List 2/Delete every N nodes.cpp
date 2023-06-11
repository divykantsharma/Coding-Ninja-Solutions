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
Node *skipMdeleteN(Node *head, int M, int N){
	//corner case
    if(!M) return NULL;    Node *curr = head;
    Node *ptr;
    int count = 0;
    while(curr) {
        
        //travese the M nodes
        for(count = 1; count < M and curr; count++) {
            curr = curr -> next;
        }
        
        if(!curr) {
            return head;
        }
        ptr = curr -> next;
        
        //delete N nodes and move to the node after hence >= sign
        for(count = 1; count <= N and ptr; count++) {
            ptr = ptr -> next;
        }
        
        curr -> next = ptr;
        curr = ptr;
    }
    return head;
}