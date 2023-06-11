Node* helper(Node *head) {
    //base case -> increment the last number by one
    if(head -> next == NULL){
        head -> data++;
        return head;
    }
    
    head -> next = helper(head -> next);
    
    if(head -> next -> data > 9) {
        head -> next -> data = 0;
        head -> data += 1;
    }
    
    return head;
}

Node* NextLargeNumber(Node *head) {
    // recursion will incerement the number accordingly
    head = helper(head);
    
    //if the first element is > 9 then we  set its value to 0 and add a new node with value 1 to it 
    if(head -> data > 9) {
        Node *newNode = new Node(1);
        head -> data = 0;
        newNode -> next = head;
        head = newNode;
    }
    return head;
}


