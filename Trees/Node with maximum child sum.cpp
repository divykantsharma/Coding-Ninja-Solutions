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
TreeNode<int>* maxSumNode(TreeNode<int> *root){
    TreeNode<int>* ans =root;
    int sum=root->data; 
    for(int i=0;i<root->children.size();i++){
        sum+=root->children[i]->data;
    }    
    for(int i=0;i<root->children.size();i++){
         TreeNode<int>*childmax=maxSumNode(root->children[i]);  //get the max node using recursion
          int smallsum=childmax->data; 
         for(int i=0;i<childmax->children.size();i++){
              smallsum+=childmax->children[i]->data;
          }
         if(sum<=smallsum){
             ans=childmax;	
             sum=smallsum;                           
         }
    }
    return ans;
}
