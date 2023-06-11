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
int length(Node *head) {
    if(head == NULL) {
        return 0;
    }
    return 1 + length(head -> next);
}

Node *bubbleSort(Node *head) {
    
    for(int i = 0; length(head) > i; i++) { 
        Node *prev = NULL;
        Node *curr = head;
        while(curr -> next) {
            
            if(curr -> data > curr -> next -> data) {
                if(prev) {
                    Node *temp = curr -> next -> next;
                    curr -> next -> next = curr;
                    prev -> next = curr -> next;
                    curr -> next = temp;
                    prev = prev -> next;
                } else {
                    head = curr -> next;
                    curr -> next = head -> next;
                    head -> next = curr;
                    prev = head;
                }
            } else { 
                prev = curr;
                curr = curr -> next;
            }
        }
    }
    return head;
}