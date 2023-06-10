#include <iostream>
#include <cstring>
using namespace std;
void strReverse(char input[], int start, int end){
    int i = start;
    int j = end;
    while (i <= j){
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
    return;
}
void reverseEachWord(char input[]){
    // Write your code here
    int size = strlen(input);
    int start = 0;
    int end = 0;
    for (int i = 0; input[i] != '\0'; i++){
        if (input[i] == ' '){
            strReverse(input, start, (i - 1));
            start = i + 1;
        }
        else if (i == size - 1){
            strReverse(input, start, i);
        }
    }
}