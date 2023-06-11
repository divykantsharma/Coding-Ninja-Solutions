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

Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    int count=0;
    while(head!=NULL){
        if(pos!=count){
            cout<<head->data<<" ";
            head=head->next;
        }
        else{
            head=head->next;
        }
        count++;
    }
}
