#include <climits>
#include <unordered_map>
int highestFrequency(int arr[], int n) {
    // Write your code here
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }
    int maxoccuring=0;
    int maxcount=INT_MIN;
    for(int i=0;i<n;i++){
        if(map[arr[i]]>maxcount){
            maxoccuring=arr[i];
            maxcount=map[arr[i]];
        }
    }
    return maxoccuring;
}