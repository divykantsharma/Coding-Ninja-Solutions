#include <string>
using namespace std;
int returnPermutations(string input, string output[]){
    if(input.size()==1){
        output[0]=input;
        return 1;
    }
    int index = 0;
    for(int i=0;i<input.size();i++){
        string Output[1000];
        int ans = returnPermutations(input.substr(0,i)+input.substr(i+1,input.size()),Output);
          for(int j=0;j<ans;j++){
              output[index] = input[i] + Output[j]; 
              index++;
          }
    }
    return index;
}