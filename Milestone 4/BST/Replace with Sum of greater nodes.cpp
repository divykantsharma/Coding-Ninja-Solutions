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
 void sum (BinaryTreeNode<int> *root , int *ans){
     if(root==NULL) return;
     sum(root->right,ans);
     *ans=*ans+root->data;
     root->data=*ans;
     sum(root->left,ans);
 }
void replaceWithLargerNodesSum(BinaryTreeNode<int> *root) {
    // Write your code here
    int ans=0;
    sum(root,&ans);
}