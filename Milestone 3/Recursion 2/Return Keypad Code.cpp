#include <string>
using namespace std;
string key[]={" ", " ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    int x=num%10;
    //base case
    if(x==0 ||x==1)
    {     output[0]="";
          return 1;
    }
    int SizeOfSmall=keypad(num/10,output);
    for(int i=1;i<key[x].size();i++){
        for(int j=0;j<SizeOfSmall;j++){
            output[SizeOfSmall*i+j]=output[j];
        }
    }
    for(int i=0;i<key[x].size();i++){
        for(int j=0;j<SizeOfSmall;j++){
            output[SizeOfSmall*i+j]=output[SizeOfSmall*i+j]+key[x][i];
        }
    }
    return SizeOfSmall*key[x].size();
}
