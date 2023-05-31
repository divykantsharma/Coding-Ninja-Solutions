#include <queue>
void findMedian(int *arr, int n){
    // Write your code here
    priority_queue<int> max;
    priority_queue<int, vector<int>, greater<int>> min;

    for (int i = 0; i < n; i++){
        if (i == 0) max.push(arr[i]);
        else{
            if (arr[i] < max.top()){
                max.push(arr[i]);
                if (max.size() - min.size() > 1){
                    min.push(max.top());
                    max.pop();
                }
            }
            else{
                min.push(arr[i]);
                if (min.size() - max.size() > 1){
                    max.push(min.top());
                    min.pop();
                }
            }
        }
        if ((i + 1) % 2 == 0) cout << (max.top() + min.top()) / 2 << " ";
        else{
            if (max.size() > min.size()) cout << max.top() << " ";
            else cout << min.top() << " ";
        }
    }
}