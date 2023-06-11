#include <iostream>
using namespace std;
int duplicateNumber(int *arr, int size){
    // Write your code here
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (i == j) continue;
            else{
                if (arr[i] == arr[j]){
                    return arr[i];
                }
            }
        }
    }
}