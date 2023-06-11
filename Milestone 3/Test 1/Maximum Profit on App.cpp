#include<algorithm>
int maximumProfit(int budget[], int n) {
    // Write your code here
	sort(budget, budget + n);
    
    int *arr = new int[n];
    
    for(int i = 0; i < n; i++) {
        arr[i] = budget[i] * (n - i); 
    }
    
    int max_profit = 0;
    
    for(int i = 0; i < n; i++) {
     max_profit = max(arr[i], max_profit);  
    }
    
    return max_profit;
}
