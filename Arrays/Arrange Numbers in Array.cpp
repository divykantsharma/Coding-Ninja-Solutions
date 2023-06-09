#include <iostream>
using namespace std;
void arrange(int *arr, int n){
    // Write your code here
    int j = 0;
    int k = (n - 1);
    for (int i = 1; i <= n; i++){
        if (i % 2 != 0){
            arr[j] = i;
            j++;
        }
        else{
            arr[k] = i;
            k--;
        }
    }
}
