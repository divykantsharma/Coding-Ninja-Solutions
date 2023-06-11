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
int findNodeRec(Node *head, int n){
	//base case
    if(head == NULL) return -1;
    if(head -> data == n) return 0;
    int count = findNodeRec(head -> next, n);
    if(count == -1) {
        return -1;
    }
    return count + 1;
}
