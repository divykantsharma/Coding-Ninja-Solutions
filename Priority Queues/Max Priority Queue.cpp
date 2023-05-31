#include <vector>
class PriorityQueue {
    // Declare the data members here
    vector<int> pq;

   public:
    PriorityQueue() {
        // Implement the constructor here
    }

    /**************** Implement all the public functions here ***************/

    void insert(int element) {
        // Implement the insert() function here
        pq.push_back(element);
        
        int childindex=pq.size()-1;
        while(childindex>0){
        	int parentindex=(childindex-1)/2;
        	if(pq[childindex]>pq[parentindex]){
            	int temp=pq[childindex];
            	pq[childindex]=pq[parentindex];
            	pq[parentindex]=temp;
        	}
        else{
            break;
        }
        childindex=parentindex;
        }
    }

    int getMax() {
        // Implement the getMax() function here
        if(pq.size()==0){
            return 0;
        }
        return pq[0];
    }

    int removeMax() {
        // Implement the removeMax() function here
        if(pq.size()==0) return 0;
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        
        int parentindex=0;
        int leftchildindex=2*parentindex+1;
        int rightchildindex=2*parentindex+2;
        
        while(leftchildindex<pq.size()){
            int maxindex=parentindex;
        	if(pq[maxindex]<pq[leftchildindex]){
            	maxindex=leftchildindex;
        	}
        	if(rightchildindex<pq.size() && pq[maxindex]<pq[rightchildindex]){
            	maxindex=rightchildindex;
        	}
        	if(maxindex==parentindex){
            	break;
        	}
        
        	int temp=pq[maxindex];
        	pq[maxindex]=pq[parentindex];
        	pq[parentindex]=temp;
        
        	parentindex=maxindex;
        	leftchildindex=2*parentindex+1;
        	rightchildindex=2*parentindex+2;
        }
        return ans;
    }

    int getSize() { 
        // Implement the getSize() function here
        return pq.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function here
        return pq.size()==0;
    }
};