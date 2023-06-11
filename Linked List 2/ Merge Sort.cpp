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
Node* findMid(Node *head) { 
	if(head == NULL) return head; 
	Node *slow = head, *fast = head -> next; 
	
    while(fast  and fast -> next) { 
		slow = slow -> next; 
		fast = fast -> next -> next; 
	} 
	return slow; 
}
Node* merge(Node *head1, Node *head2) { 
	//corner case
    if(head1 == NULL) return head2; 
	if(head2 == NULL) return head1;  
	Node *head = NULL, *tail = NULL; 
	while(head1 != NULL and head2 != NULL) { 
		if(head1 -> data < head2 -> data) { 
			if(head == NULL) {
                head = head1;
                tail = head1;
            } else {
            	tail -> next = head1; 
				tail = head1; 
            }
			head1 = head1 -> next; 
		} else {
            if(head == NULL) {
                head = head2;
                tail = head2;
            } else {
            	tail -> next = head2; 
				tail = head2; 
            }
			head2 = head2 -> next; 
		} 
	}
    
	if(head1 != NULL) tail -> next = head1; 
	if(head2 != NULL) tail -> next = head2; 
	return head;
}

Node* mergeSort(Node *head) { 
	//corner case
    if(head == NULL or head -> next == NULL) return head; 	
    Node *mid = findMid(head); 
	Node *half1 = head; 
	Node *half2 = mid -> next; 
	mid -> next = NULL; 
	half1 = mergeSort(half1); 
	half2 = mergeSort(half2); 
	Node *finalHead = merge(half1, half2); 
	return finalHead; 
}
