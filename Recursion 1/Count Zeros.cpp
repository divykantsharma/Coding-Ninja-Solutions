int countZeros(int n) {
    // Write your code here
    if(n==0){
        return 1;
    }
    if(n<10){
        return 0;
    }
    int ans=countZeros(n/10);
    if(n%10==0){
        return ans+1;
    }
    else{
        return ans;
    }
}
