#include <iostream>
#include <cstring>
using namespace std;
void trimSpaces(char input[]){
    int i = 0;
    while (input[i] != '\0'){
        if (input[i] == ' '){
            for (int j = i; input[j] != '\0'; j++){
                input[j] = input[j + 1];
            }
        }
        else i++;
    }
}