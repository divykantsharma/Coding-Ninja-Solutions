/*********************************************************
 
    // Following is the node structure

    class Node {
    public:
        int data;
        Node * next;
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
    
        ~Node() {
            if(next) {
                delete next;
            }
        }
    };

*********************************************************/
void deleteAlternateNodes(Node *head) {
    if(head == NULL) {
        return;
    }
    
    Node *prev = head;
    Node *next = head -> next;
    
    while(prev and next) {
        prev -> next = next -> next;
        prev = next -> next;
        Node *temp = next;
        if(prev != NULL) {
        	next = prev -> next; // if prev is null and we access its next, it will give segmentation fault 
        }
        free(temp);
    }
    
}
