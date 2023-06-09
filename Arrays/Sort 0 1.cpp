#include <iostream>
#include <algorithm>
using namespace std;
void sortZeroesAndOne(int *input, int size){
    // Write your code here
    int i = 0;
    int j = size - 1;
    while (i < j){
        if (input[i] == 0) i++;
        else if (input[j] == 1) j--;
        if (input[i] > input[j]){
            int temp = input[i];
            input[i] = input[j];
            input[j] = temp;
        }
    }
}
