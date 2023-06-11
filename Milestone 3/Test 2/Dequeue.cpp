 Deque {
    int  *data;
    int  frontIndex;
    int  rearIndex;
    int  capacity;

public :
    Deque(int size) {
        data = new int[size];
        frontIndex = -1;
        rearIndex = 0;
        capacity = size;
    }
 
	bool isFull() {
    	return ((frontIndex == 0 and rearIndex == capacity - 1) or frontIndex == rearIndex + 1);
	}
 
	bool isEmpty() {
    	return (frontIndex == -1);
	}

	void insertFront(int element) {
    	if (isFull()) {
       	 cout << -1 << endl;
        	return;
    	}
 
    
    	if (frontIndex == -1){
        	frontIndex = 0;
        	rearIndex = 0;
    	} else if (frontIndex == 0) {
        	frontIndex = capacity - 1 ;
    	} else {
        	frontIndex--;
    	}
    	data[frontIndex] = element;
	}
    
	void insertRear(int element) {
    	if (isFull()) {
        	cout << -1 << endl;
        	return;
    	}
    	if (frontIndex == -1) {
        	frontIndex = 0;
        	rearIndex = 0;
    	} else if (rearIndex == capacity - 1) {
        	rearIndex = 0;
    	} else {
        	rearIndex++;
    	}
    
 		data[rearIndex] = element;
	}
 
	void deleteFront() {
    	if (isEmpty()){
        	cout << -1 << endl;
        	return;
    	}
    	if (frontIndex == rearIndex) {
            frontIndex = -1;
            rearIndex = -1;
        } else {
            if (frontIndex == capacity - 1) {
                frontIndex = 0;
            } else {
                frontIndex = frontIndex + 1;
            }
    	}
    }
 
    void deleteRear() {
        if (isEmpty()) {
            cout << -1 << endl ;
            return ;
        }

        if (frontIndex == rearIndex) {
            frontIndex = -1;
            rearIndex = -1;
        } else if (rearIndex == 0) {
            rearIndex = capacity - 1;
        } else {
            rearIndex--;
        }
    }

    int getFront(){
        if (isEmpty()) {
            return -1 ;
        }
        return data[frontIndex];
    }

    int getRear() {
        if(isEmpty() or rearIndex < 0) {
            return -1 ;
        }
        return data[rearIndex];
    }
    
};
