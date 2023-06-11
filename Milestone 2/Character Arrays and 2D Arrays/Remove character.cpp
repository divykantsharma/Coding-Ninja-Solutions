#include <iostream>
#include <cstring>
using namespace std;
void removeAllOccurrencesOfChar(char input[], char c){
    // Write your code here
    int index = 0;
    for (int i = 0; input[i] != '\0'; i++){
        if (input[i] != c){
            input[index++] = input[i];
        }
    }
    input[index] = '\0';
}