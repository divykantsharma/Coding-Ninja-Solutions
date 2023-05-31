/**********************************************************

	Following are the Binary Tree Node class structure and
	the Node class structure

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

	template <typename T>
	class Node {
		public:
    	T data;
    	Node<T> *next;
    	Node(T data) {
        	this->data=data;
        	this->next=NULL;
    	}
	};

***********************************************************/
vector<Node<int> *> constructLinkedListForEachLevel(BinaryTreeNode<int> *root)
{
    // Write your code here
    vector<Node<int>*> v = {NULL};
    if (root == NULL)return v;
    else
        v.clear();
        queue<BinaryTreeNode<int> *> pendingNodes;
        pendingNodes.push(root);
        while (pendingNodes.size() != 0){
            int n = pendingNodes.size();
            Node<int> *head = NULL;
            Node<int> *tail = NULL;
            while (n != 0){
                BinaryTreeNode<int> *front = pendingNodes.front();
                pendingNodes.pop();
                Node<int> *newNode = new Node<int>(front->data);
                if (head == NULL){
                    head = newNode;
                    tail = newNode;
                }
                else{
                    tail->next = newNode;
                    tail = newNode;
                }
                if (front->left != NULL)
                    pendingNodes.push(front->left);
                if (front->right != NULL)
                    pendingNodes.push(front->right);
                    n--;
            }
            v.push_back(head);
    }
    return v;
}
