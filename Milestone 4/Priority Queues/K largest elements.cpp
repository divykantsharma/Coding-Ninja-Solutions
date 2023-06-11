#include <queue>
#include <vector>
vector<int> kLargest(int input[], int n, int k){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    //FROM MAX HEAP
    vector<int> ans;
    priority_queue<int> pq;
        for(int i=0;i<n;i++){
            pq.push(input[i]);
        }

        for(int i=0;i<k;i++){
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    //FROM MIN HEAP
	// priority_queue<int , vector<int> , greater<int>> pq;
    // for(int i=0;i<k;i++){
    //     pq.push(input[i]);
    // }
    
    // for(int i=k;i<n;i++){
    //     if(input[i]>pq.top()){
    //         pq.pop();
    //         pq.push(input[i]);
    //     }
    //     else{
    //         continue;
    //     }
    // }
    
    // vector<int> ans;
    // while(!pq.empty()){
    //     ans.push_back(pq.top());
    //     pq.pop();
    // }
    
    // return ans;
}