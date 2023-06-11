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

class BST {
    BinaryTreeNode<int>* root;
    // Define the data members
   public:
    BST() { 
        root=NULL;
        // Implement the Constructor
    }

	/*----------------- Public Functions of BST -----------------*/
	private:
    BinaryTreeNode<int>* helper_remove(int data,BinaryTreeNode<int>* node){
        if(node==NULL){
            return NULL;
        }
        if(data>node->data){
            node->right=helper_remove(data,node->right);
            return node;
        }
        else if(data<node->data){
            node->left=helper_remove(data,node->left);
            return node;
        }
        else{
            if(node->left==NULL && node->right==NULL){
                delete node;
                return NULL;
            }
            else if(node->left==NULL){
                BinaryTreeNode<int>* temp=node->right;
                node->right=NULL;
                delete node;
                return temp;
            }
            else if(node->right==NULL){
                BinaryTreeNode<int>* temp=node->left;
                node->left=NULL;
                delete node;
                return temp;
        	}
        	else{
            	BinaryTreeNode<int>* minnode=node->right;
            	while(minnode->left!=NULL){
                minnode=minnode->left;
            	}
            	int rightmin=minnode->data;
            	node->data=rightmin;
            	node->right=helper_remove(rightmin,node->right);
            	return node;
        	}
     	}
    }
    public:
    void remove(int data) { 
        // Implement the remove() function 
        this->root=helper_remove(data,this->root);
    }
	
	private:
    void helper_print(BinaryTreeNode<int>* root){
    	if(root==NULL){
        	return;
    	}
    	cout<<root->data<<":";
    	if(root->left != NULL){
     	   	cout<<"L:"<<root->left->data<<",";
    	}
    	if(root->right != NULL){
        	cout<<"R:"<<root->right->data;
    	}
    	cout<<endl;
    	helper_print(root->left);
    	helper_print(root->right);
	}
	public:
    void print() { 
        // Implement the print() function
        helper_print(root);
    }
    
    private:
    BinaryTreeNode<int>* helper_insert(int data,BinaryTreeNode<int>* node){
        if(node==NULL){
            BinaryTreeNode<int>* newnode=new BinaryTreeNode<int>(data);
            return newnode;
        }
        if(data<=node->data){
            node->left=helper_insert(data,node->left);
        }
        else{
            node->right=helper_insert(data,node->right);
        }
        return node;
    }
	public:
    void insert(int data) { 
        // Implement the insert() function 
        this->root=helper_insert(data,root);
    }
    
    private:
    bool helper_search(int data,BinaryTreeNode<int>* node){
        if(node==NULL){
            return false;
        }
        if(node->data==data){
            return true;
        }
        else if(data<node->data){
            return helper_search(data,node->left);
        }
        else{
            return helper_search(data,node->right);
        }
    }
    public:
    bool search(int data) {
		// Implement the search() function 
        return helper_search(data,root);
    }
};