#include <iostream>
using namespace std;
void insertionSort(int *input, int size){
    // Write your code here
    for (int i = 1; i < size; i++){
        int current=input[i];
        int j=i-1;
        for (;j>=0;j--){
            if (input[j] > current) input[j + 1] = input[j];
            else break;
        }
        input[j + 1] = current;
    }
}