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
pair<TreeNode<int>*,TreeNode<int>*> helper(TreeNode<int>*root){
    if(!root){
        pair<TreeNode<int>*,TreeNode<int>*>ans = {root,nullptr};
        return ans;
    }
    pair<TreeNode<int>*,TreeNode<int>*>ans = {root,nullptr};
    for(int i = 0 ; i < root->children.size(); i++){
        pair<TreeNode<int>*,TreeNode<int>*>temp = helper(root->children.at(i));
        if(!ans.second){
           if(ans.first>temp.first){
               ans.second = temp.first;
           }
            else if(ans.first<temp.second){
                ans.se
            }
        }
            if(ans.first->data>temp.first->data){
                if()
                 if(ans.second->data<temp.first->data ){
                     ans.second = temp.first;
                 }
            }
            else{
                ans.first = temp.first;
                if(ans.first->data>temp.second->data){
                    ans.second = ans.first;
                }
                else{
                    ans.second = temp.second;
                }
            }
        }
    }
    return ans;
}
TreeNode<int>* getSecondLargestNode(TreeNode<int>* root){
    return helper(root).second;
}