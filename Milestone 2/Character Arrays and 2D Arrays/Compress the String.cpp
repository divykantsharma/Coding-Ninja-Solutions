
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
string getCompressedString(string &input){
    int size = 1e6;
    char compressString[size];
    for (int i = 0; i <= input.length(); i++){
        compressString[i] = input[i];
    }
    int lastIndex = 0;
    int count = 49;
    for (int i = 1; i <= strlen(compressString); i++){
        if (compressString[i] == compressString[lastIndex]){
            count++;
        }
        else{
            if (count == 49){
                compressString[++lastIndex] = compressString[i];
                count = 49;
            }
            else if (i == strlen(compressString)){
                compressString[lastIndex + 1] = count;
                compressString[lastIndex + 2] = '\0';
            }
            else{
                compressString[lastIndex + 1] = count;
                compressString[lastIndex + 2] = compressString[i];
                lastIndex = (lastIndex + 2);
                count = 49;
            }
        }
    }
    return compressString;
}