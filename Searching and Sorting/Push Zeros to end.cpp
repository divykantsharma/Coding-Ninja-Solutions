#include <iostream>
using namespace std;
void pushZeroesEnd(int *input, int size){
    // Write your code here
    int i = 0, j = 0;
    while (i < size){
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        if (input[j] != 0) j++;
    }
}