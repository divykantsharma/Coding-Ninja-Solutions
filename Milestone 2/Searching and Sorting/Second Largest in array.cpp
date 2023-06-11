#include <iostream>
using namespace std;
int findSecondLargest(int *input, int n){
    // Write your code here
    int secondLargest = -2e31;
    int largest = input[0];
    for (int i = 1; i < n; i++){
        if (input[i] >= largest){
            if (input[i] > largest){
                secondLargest = largest;
                largest = input[i];
            }
        }
        else if (input[i] > secondLargest) secondLargest = input[i];
    }
    return secondLargest;
}