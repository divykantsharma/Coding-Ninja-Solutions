#include <iostream>
using namespace std;
/* input - Input String
 *  output - Save the result in the output array (passed as argument). You don’t have to
 *  print or return the result
 */
int strlen(char input[]){
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++) count++;
    return count;
}
void saveOutput(char input[], char output[], int start, int end){
    int j = 0;
    while (start <= end){
        output[j] = input[start];
        j++;
        start++;
    }
    output[j] = '\0';
}
void minLengthWord(char input[], char output[]){
    int min = 100000;
    int count = 0;
    int start = 0;
    for (int i = 0; input[i] != '\0'; i++){
        if (i == (strlen(input) - 1)){
            count++;
            if (min > count){
                min = count;
                saveOutput(input, output, start, i);
            }
        }
        else if (input[i] != ' ') count++;
        else{
            if (min > count){
                min = count;
                saveOutput(input, output, start, i - 1);
            }
            count = 0;
            start = i + 1;
        }
    }
}