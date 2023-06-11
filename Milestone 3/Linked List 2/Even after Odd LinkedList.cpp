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

*****************************************************************/]
Node *evenAfterOdd(Node *head){
    // corner case
    if(!head or !(head -> next)) return head;
    Node *curr = head;
    Node *odd_Head = NULL;
    Node *odd_Tail = NULL;
    Node *even_Head = NULL;
    Node *even_Tail = NULL;
    while(curr) {
        if(curr -> data & 1) {
            if(odd_Head == NULL) {
                odd_Head = curr;
                odd_Tail = curr;
            } else {
                odd_Tail -> next = curr;
                odd_Tail = curr;
            }
        } else {
            if(even_Head == NULL) {
                even_Head = curr;
                even_Tail = curr;
            } else {
                even_Tail -> next = curr;
                even_Tail = curr;
            }
        }
        curr = curr -> next;
    }
    
    if(odd_Head == NULL) {
        return even_Head;
    } else {
        if(even_Head == NULL) {
            return odd_Head;
        } else {
            odd_Tail -> next = even_Head;
            even_Tail -> next = NULL;
            return odd_Head;
        }
    }
}
