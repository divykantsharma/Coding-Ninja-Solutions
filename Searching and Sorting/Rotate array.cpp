#include <iostream>
using namespace std;
void swapElement(int input[], int i, int j){
    int temp = input[i];
    input[i] = input[j];
    input[j] = temp;
}

void reverse(int input[], int start, int end){
    int i = start, j = end;
    while (i < j){
        swapElement(input, i, j);
        i++;
        j--;
    }
}
void rotate(int *input, int d, int n){
    // Write your code here
    if (d >= n && n != 0) d = d % n;
    else if (n == 0) return;
    reverse(input, 0, n - 1);
    reverse(input, 0, n - d - 1);
    reverse(input, n - d, n - 1);
}
