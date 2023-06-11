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
Node *reverseLinkedList(Node *head){
    // Write your code here
	//corner case
    if(head == NULL or head -> next == NULL) return head;
    Node *curr = head;
    Node *next = NULL;
    Node *prev = NULL; 
    while(curr) {
        next = curr -> next;
        curr -> next = prev;
        
        prev = curr;
        curr = next;
    }
    return prev;
}