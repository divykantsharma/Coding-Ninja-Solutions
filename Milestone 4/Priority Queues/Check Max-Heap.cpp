#include<queue>
bool isMaxHeap(int arr[], int n) {
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        if(pq.top()!=arr[i]) return false;
        pq.pop();
    }
    return true;
}