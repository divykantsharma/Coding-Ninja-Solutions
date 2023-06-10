#include <iostream>
#include <cstring>
using namespace std;
void printSubstrings(char input[]){
    // Write your code here
    for (int start = 0; input[start] != '\0'; start++){
        for (int end = start; input[end] != '\0'; end++){
            for (int i = start; i <= end; i++){
                cout << input[i];
            }
            cout << endl;
        }
    }
}