bool isPermutation(char input1[], char input2[]) {
    int check1[256]={0};
    for(int i=0;input1[i];i++){
        check1[input1[i]]++;
    }
    for(int j=0;input2[j];j++){
        check1[input2[j]]--;
    }
    for(int k=0;k<256;k++){
        if(check1[k]) return false;
    }
    return true;
}


