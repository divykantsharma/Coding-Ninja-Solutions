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
    if(root==NULL) return;
    queue<BinaryTreeNode<int>*> pendingnodes;
    pendingnodes.push(root);
    pendingnodes.push(NULL);
    while(pendingnodes.size()!=0){
		BinaryTreeNode<int> *front = pendingnodes.front();
        pendingnodes.pop();
        if(front==NULL){
            cout<<endl;
            if(pendingnodes.size()!=0){
                pendingnodes.push(NULL);
            }
        }
        else{
            cout<<front->data<<" ";
            if(front->left!=NULL){
            pendingnodes.push(front->left);
        }
        	if(front->right!=NULL){
            	pendingnodes.push(front->right);
        	}
        }
    }
}