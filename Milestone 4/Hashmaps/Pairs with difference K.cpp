#include <unordered_map>
int getPairsWithDifferenceK(int *arr, int n, int k) {
	// Write your code here
	unordered_map<int,int> freq;
	int paircount=0;
	for(int i=0;i<n;++i){
		int complement=arr[i]+k;
		paircount+=freq[complement];
		if(k!=0){
			complement=arr[i]-k;
			paircount+=freq[complement];
		}
		++freq[arr[i]];
	}
	return paircount;
}