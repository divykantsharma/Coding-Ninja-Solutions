int pairSum(int *arr, int n, int num) {
	//Write your code here 
    int count = 0;
    sort(arr,arr + n);
    int start = 0;
    int end = n - 1;
    for(; start < end;) {
         if(arr[start] + arr[end] < num) {
            start++;
        }
        else if (arr[start] + arr[end] > num) {
            end--;
        }
        else {
            int start_element = arr[start];
            int end_element =  arr[end];
            //if all the elements are same
            if(start_element == end_element) {
                int total = (end - start) + 1;
                count += ((total ) * (total - 1) ) / 2;  // n choose 2;
                return count;
            }
            int start_temp = start;
            int end_temp = end;
            for(;start_temp <= end_temp and arr[start_temp] == start_element;) {
                start_temp++;
            }
            for(;start_temp <= end_temp and arr[end_temp] == end_element;) {
                end_temp--;
            }       
            count += (start_temp - start) * (end - end_temp);
        	start = start_temp;
            end = end_temp;
        }
    }
    return count;
}
