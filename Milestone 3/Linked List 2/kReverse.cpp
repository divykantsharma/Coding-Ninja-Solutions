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
Node *kReverse(Node *head, int k){
	//corner case
    if (head == NULL or k == 0) return head;
	Node *curr = head;
    Node *next = NULL;
    Node *prev = NULL;
    int count = 0;
    while(curr and count < k) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    // after the loop prev will be pointing at the first node of revesed group
	// and head will be at the last
    if(next) head -> next = kReverse(next, k);
    return prev;
}
