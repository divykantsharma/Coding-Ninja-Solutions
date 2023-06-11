// /**********************************************************

// 	Following are the Binary Tree Node class structure and the 
// 	Node class structure

// 	template <typename T>
// 	class BinaryTreeNode {
//     	public: 
//     	T data;
//     	BinaryTreeNode<T> *left;
//     	BinaryTreeNode<T> *right;

//     	BinaryTreeNode(T data) {
//         	this->data = data;
//         	left = NULL;
//         	right = NULL;
//     	}
// 	};

// 	template <typename T>
//  	class Node{
//     	public:
//     	T data;
//     	Node<T> *next;
    
//     	Node(T data) {
//         	this->data = data;
//         	this->next = NULL;
//     	}
//  	};

// ***********************************************************/
#include <vector>
Node<int>* formLL(vector<int>& in){
    Node<int>* head=NULL;
    Node<int>* tail=NULL;
    for(int i=0;i<in.size();i++){
        Node<int>* newnode=new Node<int>(in[i]);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        tail->next=newnode;
        tail=newnode;
    }
    return head;
}
void inorder(BinaryTreeNode<int>* root,vector<int>& in){
    if(root==NULL) return;
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}
Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {
    if(root==NULL) return NULL;
    if(root->left==NULL && root->right==NULL){
        Node<int>* newnode=new Node<int>(root->data);
        return newnode;
    }
    vector<int> in;
    inorder(root,in);
    Node<int>* head=formLL(in);
    return head;
}