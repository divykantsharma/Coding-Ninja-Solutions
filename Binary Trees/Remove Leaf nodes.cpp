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

BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return NULL;
    }
    
    if((root->left==NULL)&&(root->right==NULL)){
        return NULL;
    }
    
    BinaryTreeNode<int>* left = removeLeafNodes(root->left);
    BinaryTreeNode<int>* right = removeLeafNodes(root->right);
    
    root->left=left;
    root->right=right;
    
    return root;
}