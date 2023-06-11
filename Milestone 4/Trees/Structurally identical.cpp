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

bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    queue<TreeNode<int>*> ans1;
    queue<TreeNode<int>*> ans2;
    ans1.push(root1);
    ans2.push(root2);
    vector<int>arr1;
    vector<int>arr2;
    while(!ans1.empty()){
        TreeNode<int>* front = ans1.front();
        ans1.pop();
        arr1.push_back(front->data);
        for(int i = 0 ; i < front->children.size(); i++){
            ans1.push(front->children.at(i));
        }
    }
     while(!ans2.empty()){
        TreeNode<int>* front = ans2.front();
        ans2.pop();
        arr2.push_back(front->data);
        for(int i = 0 ; i < front->children.size(); i++){
            ans2.push(front->children.at(i));
        }
    }
    
    if(arr2.size()!=arr1.size())
        return false;
    else{
        for(int i = 0 ; i<arr1.size();i++){
            if(arr1[i]!=arr2[i]){
                return false;
            }
        }
    }
    return true;
}