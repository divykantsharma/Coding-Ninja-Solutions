#include <iostream>
#include <cstring>
using namespace std;
int length(char str[]){
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) count++;
    return count;
}
bool checkPalindrome(char str[]){
    // Write your code here
    int start = 0;
    int end = length(str) - 1;
    while (start <= end){
        if (str[start++] != str[end--]) return false;
    }
    return true;
}