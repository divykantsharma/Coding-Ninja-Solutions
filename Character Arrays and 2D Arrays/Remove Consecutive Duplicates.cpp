#include <iostream>
#include <cstring>
using namespace std;
void removeConsecutiveDuplicates(char input[]){
    int lastIndex = 0;
    for (int i = 1; input[i] != '\0'; i++){
        if (input[lastIndex] != input[i]){
            input[++lastIndex] = input[i];
        }
    }
    input[lastIndex + 1] = '\0';
}