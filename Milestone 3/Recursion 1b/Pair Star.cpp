#include<string.h>
// Change in the given string itself. So no need to return or print the changed string.

void pairStar(char input[]) {
    // Write your code here
    int size=strlen(input);
    if(input[0]=='\0'){
        return;
    }
    if(input[0]==input[1]){
        for(int i=size;i>=1;i--){
            input[i+1]=input[i];
        }
        input[1]='*';
    }
    pairStar(input+1);

}
