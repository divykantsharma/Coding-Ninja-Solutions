#include <iostream>
using namespace std;
int arrayRotateCheck(int *input, int size){
    // Write your code here
    int count = 0;
    for (int i = 0; i < size - 1; i++){
        if (input[i] < input[i + 1]) count++;
        else return (count + 1);
    }
    return 0;
}