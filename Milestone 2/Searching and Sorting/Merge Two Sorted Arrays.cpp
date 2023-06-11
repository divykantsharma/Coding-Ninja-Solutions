#include <iostream>
using namespace std;
void merge(int *arr1, int size1, int *arr2, int size2, int *ans){
    // Write your code here
    int i = 0, j = 0, k = 0;
    while (j < size1 && k < size2){
        if (arr1[j] == arr2[k]){
            ans[i++] = arr1[j++];
            ans[i++] = arr2[k++];
        }
        else if (arr1[j] < arr2[k]) ans[i++] = arr1[j++];
        else ans[i++] = arr2[k++];
    }
    // Sorting remaining elements of first array
    while (j < size1){
        ans[i++] = arr1[j++];
    }
    // Sorting remaining elements of second array
    while (k < size2){
        ans[i++] = arr2[k++];
    }
}

