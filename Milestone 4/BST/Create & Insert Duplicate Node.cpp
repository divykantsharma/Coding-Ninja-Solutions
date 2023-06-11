/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

void insertDuplicateNode(BinaryTreeNode<int> *root) {
    // Write your code herE
    if(root==NULL) return;
    int tempdata=root->data;
    BinaryTreeNode<int>* temp=new BinaryTreeNode<int>(tempdata);
    BinaryTreeNode<int>* help=root->left;
    root->left=temp;
    temp->left=help;
    insertDuplicateNode(root->left->left);
    insertDuplicateNode(root->right);
}