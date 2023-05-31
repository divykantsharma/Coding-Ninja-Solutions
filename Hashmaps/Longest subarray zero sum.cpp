#include <unordered_map>
int lengthOfLongestSubsetWithZeroSum(int* arr, int n) {
    // Write your code here
    int maxSubarray = 0;
	int sum = 0;
	unordered_map<int, int> prefixSum;
	prefixSum[0] = -1;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
		if (prefixSum[sum] == 0 && sum == arr[0]) {    //Check the 0th index
			maxSubarray = max(maxSubarray, i);
		} else if (prefixSum[sum] != 0) {
			maxSubarray = max(maxSubarray, i - prefixSum[sum]);
		} else {
			prefixSum[sum] = i;
		}
	}
	return maxSubarray;
}