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
Node *deleteNodeRec(Node *head, int pos) {
    if(head == NULL) return NULL;
    if(pos == 0 and head) {
        return head -> next;
    } 
    else if(pos == 0) {
        Node *newNode = head -> next;
        delete head;
        return newNode;
    } 
    else{
        head -> next = deleteNodeRec(head -> next, pos - 1);
        return head;
    }
}
