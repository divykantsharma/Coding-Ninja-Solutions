#include <iostream>
using namespace std;
void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output){
    // Write your code here
    int maxIndex = size1;
    if (size1 < size2) maxIndex = size2;
    int i = size1 - 1;
    int j = size2 - 1;
    int carry = 0;
    while (i >= 0 && j >= 0){
        int sum = input1[i--] + input2[j--] + carry;
        output[maxIndex--] = sum % 10;
        carry = sum / 10;
    }
    while (i >= 0){
        int sum = input1[i--] + carry;
        output[maxIndex--] = sum % 10;
        carry = sum / 10;
    }
    while (j >= 0){
        int sum = input2[j--] + carry;
        output[maxIndex--] = sum % 10;
        carry = sum / 10;
    }
    while (maxIndex >= 0){
        output[maxIndex--] = carry;
    }
}