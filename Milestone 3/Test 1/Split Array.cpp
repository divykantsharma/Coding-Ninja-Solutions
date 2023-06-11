bool helper(int *arr, int n, int idx, int sum1, int sum2) {
    if(idx == n) {
        return sum1 == sum2;
    }
    
    if(arr[idx] % 5 == 0) {
        sum1 += arr[idx];
    }
    
    else if(arr[idx] % 3 == 0) {
        sum2 += arr[idx];
    }
    
    // special case
    else{
    	return helper(arr, n, idx + 1, sum1 + arr[idx], sum2) or helper(arr, n, idx + 1, sum1, sum2 + arr[idx]);
    }
    
    return helper(arr, n, idx + 1, sum1, sum2);
    
}
bool splitArray(int *input, int size) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    helper(input, size, 0 , 0, 0);
}
