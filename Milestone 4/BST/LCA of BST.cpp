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
int getLCA(BinaryTreeNode<int>* root , int val1 , int val2){
    // Write your code here
    if(root==NULL) return -1;
    if(root->data>val1 && root->data>val2){
        getLCA(root->left,val1,val2);
    }
    else if(root->data<val1 && root->data<val2){
        getLCA(root->right,val1,val2);
    }
    else{
     return root->data;   
    }
}