int i,j=0;
int allIndexes(int input[], int size, int x, int output[]) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Save all the indexes in the output array passed and return the size of output array.
     Taking input and printing output is handled automatically.
  */
    if(size==0) return 0;
    else{
        if(input[0]==x){
            output[j]=i;
            j++;
        }
        i++;
        allIndexes(input+1,size-1,x,output);
    }
    return j ;  
}
