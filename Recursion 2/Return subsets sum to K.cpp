/***
You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 3, 4, 2} and K = 5, then output array should contain
	{{2, 1, 4},	// Length of this subset is 2
	{2, 3, 2}}	// Length of this subset is 2

Don’t print the subsets, just save them in output.
***/

#include<cstring>
using namespace std;
int subsetSumToK(int input[], int n, int output[][50], int k) {
    if(n==0){
        if(k==0){
            output[0][0]=0;
            return 1;
        }
        else{
        return 0;
    }
    }
  int output1[1000][50];
    int output2[1000][50];
  int s1= subsetSumToK(input+1,n-1,output1,k-input[0]);
    int s2 = subsetSumToK(input+1,n-1,output2,k);
 for(int i=0;i<s1;i++){
     output[i][0]=output1[i][0]+1;
     output[i][1]=input[0];
     for(int j=1;j<=output1[i][0];j++){
         output[i][j+1]=output1[i][j];
     }
 }
   for(int i=0;i<s2;i++){
       for(int j=0;j<=output2[i][0];j++){
       output[i+s1][j]=output2[i][j];
   } 
   }
    return s1+s2;
}