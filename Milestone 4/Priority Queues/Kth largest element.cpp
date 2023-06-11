#include <queue>
int kthLargest(int* arr, int n, int k) {
    // Write your code here
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    int i=0;
    int ans=0;
    while(i<n){
        if(i==k-1){
            ans=pq.top();
            break;
        }
        pq.pop();
        i++;
    }
    return ans;
}