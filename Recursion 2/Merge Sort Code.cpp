void merging(vector<int>& input,int low, int mid, int high) {
    int b[high-low+1];
    int l1=low,l2=mid+1,i=0;
    while(l1 <= mid && l2 <= high) {
        if(input[l1] <= input[l2]) b[i++] = input[l1++];
        else  b[i++] = input[l2++];      
    }
        while(l1 <= mid)  {
            b[i++] = input[l1++];
        }
        while(l2 <= high){
            b[i++] = input[l2++];
        }
        int j=0;
        for(i = low; i <= high; i++)
            input[i] = b[j++];
}
void mergeSort1(vector<int>& input,int first,int last){
    if(first<last){
        int mid = (first+last) / 2;
        mergeSort1(input,first, mid);
        mergeSort1(input,mid+1,last);
        merging(input,first, mid,last);
    } 
    else return;  
}
void mergeSort(vector<int>& arr, int l, int r) {
    if(arr.size()<=0) return;
    mergeSort1(arr,0,arr.size()-1);
}
