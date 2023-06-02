#include<string.h>
bool checkPalindrome(char input[]) {
    static int i=0;
    int S=strlen(input);
    if(i>=S)
        return 1;
    if(input[i]!=input[S-i-1])
    {
        return 0;
    }
    else
    {
        i++;
        checkPalindrome(input);
     }
}