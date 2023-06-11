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

int getHeight(TreeNode<int>* root) {
    if(root==NULL) return 0;
    int maxheight=0;
    for(int i=0;i<root->children.size();i++){
    int maxchildheight=getHeight(root->children[i]);
    if(maxchildheight>maxheight){
            maxheight=maxchildheight;
        }
    }
    return 1+maxheight;
}

