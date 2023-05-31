#include<unordered_map>
int pairSum(int *arr, int n) {
	// Write your code here
    int count =0;
    unordered_map<int,int> seen;
    for(int i=0;i<n;i++){
        if(seen[-arr[i]]){
            count+=seen[-arr[i]];
        }
        seen[arr[i]]++;
    }
    return count;
}