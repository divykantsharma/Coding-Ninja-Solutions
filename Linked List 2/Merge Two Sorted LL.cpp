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
Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2){
    // corner cases
    if(head1 == NULL) return head2;
    if(head2 == NULL) return head1;
   Node *merge_head = NULL;
   Node *merge_tail = NULL;
   while(head1 and head2) {
       if((head1 -> data) < (head2 -> data)){
           if(merge_head == NULL) {
               merge_head = head1;
               merge_tail = head1;
               
           } else {
               merge_tail -> next = head1;
               merge_tail = head1;
           }
           head1 = head1 -> next;
       }
        else {
           if(merge_head == NULL) {
               merge_head = head2;
               merge_tail = head2;
           } else {
               merge_tail -> next = head2;
               merge_tail = head2;
           }
       	   head2 = head2 -> next;
       }
   }
   if(head1) merge_tail -> next = head1;
   if(head2) merge_tail -> next = head2;
   return merge_head; 
}
