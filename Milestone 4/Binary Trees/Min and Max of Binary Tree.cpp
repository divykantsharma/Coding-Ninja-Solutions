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

/*
	The first value of the pair must be the minimum value in the tree and 
	the second value of the pair must be the maximum value in the tree
*/
#include<climits>
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root==NULL){
        pair<int,int> p;
        p.first=INT_MAX;
        p.second=INT_MIN;
        return p;
    }

    pair<int,int> p;
    p.first=INT_MAX;
    p.second=INT_MIN;
    
    if(root->data>p.second) p.second=root->data;
    if(root->data<p.first) p.first=root->data;

    pair<int,int> left=getMinAndMax(root->left);
    pair<int,int> right=getMinAndMax(root->right);
    
    p.first=min(p.first,min(left.first,right.first));
    p.second=max(p.second,max(left.second,right.second));
    
    return p;
}