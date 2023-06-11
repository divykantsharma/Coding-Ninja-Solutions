/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};
	
***********************************************************/
#include <climits>
int maximum(BinaryTreeNode<int>* root){
    if(root==NULL) return INT_MIN;
    return max(root->data,max(maximum(root->left),maximum(root->right)));
}

int minimum(BinaryTreeNode<int>* root){
    if(root==NULL) return INT_MAX;
    return min(root->data,min(minimum(root->left),minimum(root->right)));
}

bool isBST(BinaryTreeNode<int>* root){
    if(root==NULL) return true;
    int leftmax=maximum(root->left);
    int rightmin=minimum(root->right);

    return (root->data>leftmax) && (root->data<=rightmin) && isBST(root->left) && isBST(root->right);
}

int height(BinaryTreeNode<int>* root){
    if(root==NULL) return 0;
    return 1+max(height(root->left),height(root->right));
}

int largestBSTSubtree(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL) return 0;
    if(isBST(root)){
        int h = height(root);
        return h;
    }
    else{
        return max(largestBSTSubtree(root->left),largestBSTSubtree(root->right));
    }
}