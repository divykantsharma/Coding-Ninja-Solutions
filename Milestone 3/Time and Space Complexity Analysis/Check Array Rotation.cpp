int arrayRotateCheck(int *arr, int size) {
    //Write your code here
    // we will use binary search to solve this question
    int low = 0;
    int high = size - 1;
    while(low < high) {
        int mid = low + ((high - low ) / 2);
        if(arr[mid] < arr[0]) {
            high = mid;
        }
        else if (arr[mid] >= arr[0]) {
            low = mid + 1;
        }       
    }
    // sanity check
    if(arr[low] < arr[0]) return low;
    else return 0;
}
