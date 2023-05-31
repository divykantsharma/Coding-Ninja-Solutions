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
BinaryTreeNode<int>* helpertree(int* input , int si , int ei){
	if(si>ei) return NULL;
	int rootindex=(ei+si)/2;
	int rootdata=input[rootindex];
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootdata);
	root->left=helpertree(input,si,rootindex-1);
	root->right=helpertree(input,rootindex+1,ei);
	return root;
}
BinaryTreeNode<int>* constructTree(int *input, int n) {
	return helpertree(input , 0 , n-1);
}