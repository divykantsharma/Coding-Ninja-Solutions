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

void printIthNode(Node *head, int i)
{
    //Write your code here
    int length=0;
    Node *temp= head;
    while(temp!=NULL){
        if(length==i){
            cout<<temp -> data;
            break;
        }
        temp = temp->next;
        length++;
    }
}