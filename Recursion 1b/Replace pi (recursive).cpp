#include<string.h>
// Change in the given string itself. So no need to return or print anything

void replacePi(char input[]) {
	// Write your code here
    int size=strlen(input);
    if(input[0]=='\0'){
        return;
    }
    if(input[0]=='p'&&input[1]=='i'){
        for(int i=size;i>=2;i--){
            input[i+2]=input[i];
        }
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
    }
 replacePi(input+1);
}
