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
#include <vector>
#include <algorithm>
void preorder(BinaryTreeNode<int> *root , vector<int>& ans){
    if(root==NULL){
        return;
    }
    ans.push_back(root->data);
    preorder(root->left,ans);
    preorder(root->right,ans);
}

void printNodesSumToS(BinaryTreeNode<int> *root, int s) {
    // Write your code here
    vector<int> ans;
    preorder(root,ans);
    sort(ans.begin(),ans.end());
    int start = 0;
    int end = ans.size()-1;
    while(start<end){
        if(ans[start]+ans[end]==s){
            cout<<ans[start]<<" "<<ans[end]<<endl;
            start++;
            end--;
            continue;
        }
        if(ans[start]+ans[end]>s){
            end--;
        }
        else{
            start++;
        }
    }
}