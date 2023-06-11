void heapSort(int arr[], int n) {
    // Write your code
        for(int i=1;i<n;i++){

        int childindex=i;
        while(childindex>0){
            int parentindex=(childindex-1)/2;
            if(arr[childindex]<arr[parentindex]){
                swap(arr[childindex],arr[parentindex]);
            }
            else{
                break;
            }
        childindex=parentindex;
        }
    }
    //Remove elements
    int size=n;

    while(size>1){
        int temp=arr[0];
        arr[0]=arr[size-1];
        arr[size-1]=temp;
        size--;

        int parentindex=0;
           int leftchildindex=2*parentindex+1;
           int rightchildindex=2*parentindex+2;
           
           while(leftchildindex<size){
               int minindex=parentindex;
               if(arr[minindex]>arr[leftchildindex]){
                   minindex=leftchildindex;
               }
               if(rightchildindex<size && arr[minindex]>arr[rightchildindex]){
                   minindex=rightchildindex;
               }
               if(minindex==parentindex){
                   break;
               }
               int temp=arr[minindex];
               arr[minindex]=arr[parentindex];
               arr[parentindex]=temp;

               parentindex=minindex;
               leftchildindex=2*parentindex+1;
               rightchildindex=2*parentindex+2;
        }
    }
}