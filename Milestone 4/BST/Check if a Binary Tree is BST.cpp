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
#include <climits>
bool isbstbetter(BinaryTreeNode<int>* root,int min,int max){
    if(root==NULL) return true;
    if(root->data<min || root->data>max) return false;
    bool isLeftOK=isbstbetter(root->left,min,root->data-1);
    bool isRightOK=isbstbetter(root->right,root->data,max);
    return isLeftOK&&isRightOK;
}
bool isBST(BinaryTreeNode<int> *root){
    int min=INT_MIN;
    int max=INT_MAX;
    return isbstbetter(root,min,max);
}