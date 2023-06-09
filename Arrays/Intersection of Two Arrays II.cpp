#include <iostream>
#include <algorithm>
using namespace std;
void intersection(int *input1, int *input2, int size1, int size2){
    // Write your code here
    for (int i = 0; i < size1; i++){
        for (int j = 0; j < size2; j++){
            if (input1[i] == input2[j]){
                input2[j] = -2e32;
                cout << input1[i] << " ";
                break;
            }
        }
    }
}