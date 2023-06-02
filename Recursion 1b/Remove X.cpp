// Change in the given string itself. So no need to return or print anything

void removeX(char input[]) {
    // Write your code here
    if(input[0]=='\0'){
        return;
    }
    
    if(input[0]!='x'){
        removeX(input+1);
    } 
    else{
        int i;
        for(i=1;input[i]!='\0';i++){
            input[i-1]=input[i];
        }
        input[i-1]=input[i];
        removeX(input);
    }
}
