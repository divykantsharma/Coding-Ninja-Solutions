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
Node *midPoint(Node *head) {	
   //corner case 
   if(head == NULL or head -> next == NULL) return head;
   Node *slow = head;
   Node *fast = head -> next;
   while(fast and fast -> next) {
       slow = slow -> next;
       fast = fast -> next -> next;
   }  
   return slow;
}
