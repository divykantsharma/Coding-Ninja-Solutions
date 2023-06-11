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

int getLCA(BinaryTreeNode <int>* root , int a, int b) {
    // Write your code here
    if(root==NULL) return -1;
    if(root->data==a || root->data==b) return root->data;
    
    int left = getLCA(root->left,a,b);
    int right = getLCA(root->right,a,b);
    
    if(left==-1) return right;
    if(right==-1) return left;
    
    return root->data;
}