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
Node* insertNode(Node *head, int pos, int data) {
	// Write your code here
    if(pos == 0 and head) {
        Node *newNode = new Node(data);
        newNode -> next = head;
        return newNode;
    }	
    // corner case
    if(head == NULL) return head;
    head -> next = insertNode(head -> next, pos - 1, data);
    return head;
}