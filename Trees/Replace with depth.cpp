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
TreeNode<int>* update(TreeNode<int>* root){
    root->data+=1;
    for(int i = 0 ; i < root->children.size() ;i++){
        TreeNode<int>* temp = update(root->children.at(i));
        root->children.at(i) = temp;
    }
    return root;
}
TreeNode<int>* helper(TreeNode<int>* root){
    root->data = 0;
    for(int i = 0 ; i < root->children.size() ;i++){
        TreeNode<int>* temp = helper(root->children.at(i));
        root->children.at(i) = update(temp);
    }
    return root;
}
void replaceWithDepthValue(TreeNode<int>* root) {
    helper(root);
}