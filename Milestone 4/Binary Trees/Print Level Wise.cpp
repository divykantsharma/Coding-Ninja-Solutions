/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/
#include <queue>
void printLevelWise(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*> pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0){
        BinaryTreeNode<int>* front = pendingnodes.front();
        pendingnodes.pop();
        if(front==NULL){
            cout<<endl;
            if(pendingnodes.size()!=NULL){
                pendingnodes.push(NULL);
            }
        }
        else{
            cout<<front->data<<":";
            cout<<"L:";
        }
        if(front->left){
            pendingnodes.push(front->left);
            cout<<front->left->data<<",";
        }
        else{
            cout<<-1<<",";
        }
        cout<<"R:";
        if(front->right){
            pendingnodes.push(front->right);
            cout<<front->right->data<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}