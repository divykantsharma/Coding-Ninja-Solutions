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

vector<int>* getPath(BinaryTreeNode<int> *root , int data) {
	// Write your code here
	if(root==NULL) return NULL;
	if(root->data==data){
		vector<int>* v=new vector<int>();
		v->push_back(root->data);
		return v;
	}
	if(root->data>data){
		vector<int>* leftoutput=getPath(root->left,data);
		if(leftoutput!=NULL){
		leftoutput->push_back(root->data);
		return leftoutput;
		}
	}
	if(root->data<data){
		vector<int>* rightoutput=getPath(root->right,data);
		if(rightoutput!=NULL){
			rightoutput->push_back(root->data);
			return rightoutput;
		}
	}
	return NULL;
}