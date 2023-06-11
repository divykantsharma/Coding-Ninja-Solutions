#include <queue>
int buyTicket(int *arr, int n, int k) {
    // Write your code here
    queue<int> q;
    for(int i=0;i<n;i++){
        q.push(i);
    }
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    int time=0;
    while(q.front()!=k || pq.top()!=arr[q.front()]){
        if(pq.top()>arr[q.front()]){
    	    int x=q.front();
            q.pop();
            q.push(x);
        }    
        else if(pq.top()==arr[q.front()]){
            pq.pop();
            q.pop();
            time++;
        }
    }
    return time+1;
}