/************************************************************
 
    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;
    
        TreeNode(T data) {
            this->data = data;
        }
    
        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/
#include<climits>
TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    if(root==nullptr)return root;
    int diff = INT_MAX;
    TreeNode<int>* ans = nullptr;
    
    if(root->data>x){
        ans = root;
    }
    for(int i = 0 ; i < root->children.size();i++){
        TreeNode<int>* temp = getNextLargerElement(root->children.at(i),x);
        if(!ans){
            ans = temp;
        }
        else if(ans->data>temp->data and !temp){
            ans = temp;
        }
    }
   return ans;
}