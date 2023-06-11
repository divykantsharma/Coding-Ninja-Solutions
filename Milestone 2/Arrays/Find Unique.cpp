#include <iostream>
using namespace std;
int findUnique(int *arr, int size){
    // Write your code here
    for (int i = 0; i < size; i++){
        bool isUnique = true;
        for (int j = 0; j < size; j++){
            if (i == j) continue;
            else{
                if (arr[i] == arr[j]){
                    isUnique = false;
                    break;
                }
            }
        }
        if (isUnique){
            return arr[i];
        }
    }
}