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
int findNode(Node *head, int n, int count = 0) {
    // Write your code here.
    // corner case 
	if(head == NULL) {
        return -1;
    }
    // base case
    if(n == head -> data) {
        return count;
    }
    return findNode(head -> next, n, count + 1);
}