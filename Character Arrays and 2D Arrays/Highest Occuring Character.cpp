#include <iostream>
#include <cstring>
using namespace std;
char highestOccurringChar(char input[]){
    // Write your code here
    int freq[256] = {0};
    for (int i = 0; input[i] != '\0'; i++){
        freq[(int)input[i]] += 1;
    }
    char ans = input[0];
    int count = freq[(int)input[0]];
    for (int i = 1; input[i] != '\0'; i++){
        int occur = freq[(int)input[i]];
        if (occur > count){
            ans = input[i];
            count = occur;
        }
    }
    return ans;
}