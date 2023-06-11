// Following is the Binary Tree node structure
/**************
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
***************/
bool solve(BinaryTreeNode<int>* root,int x,int y){
        if(root==NULL)return true;
        if(root->left!=NULL && root->right!=NULL){
            if(root->left->data==x && root->right->data==y){
                return false;
            }
           if(root->left->data==y && root->right->data==x){
                return false;
            }
        }
        
        bool q=solve(root->left,x,y);
        bool p=solve(root->right,x,y);
        return p&q;
    }
    int hsolve(BinaryTreeNode<int>* root,int val){
        if(root==NULL)return -1;
        if(root->data==val){
            return 1;
        }
        int x=hsolve(root->left,val);
        int y=hsolve(root->right,val);
        if(x!=-1)return x+1;
        if(y!=-1)return y+1;
        return -1;
    }

bool isCousin(BinaryTreeNode<int> *root, int p, int q) {
    // Write your code here
    bool j=solve(root,p,q);
         if(j==false)return false;
        int h1=hsolve(root,p);
        int h2=hsolve(root,q);
        if(h1==-1)return false;
        if(h1==h2)return true;
        return false;
}