#include <iostream>
using namespace std;
int linearSearch(int *arr, int n, int x){
    // Write your code here
    for (int i = 0; i < n; i++) {
        if (x == arr[i]) {
            return i;
        }
    }
    return -1;
}
