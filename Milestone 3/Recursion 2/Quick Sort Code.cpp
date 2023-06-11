/*
	The function is called with the parameters:
	quickSort(input, 0, size - 1);
*/
int partitionArray(int input[], int start, int end) {
	// Write your code here
	// Choosing the pivot
	int pivot = input[end];
	// Index of smaller element and indicates
	// the right position of pivot found so far
	int i = (start - 1);
	for (int j = start; j <= end - 1; j++) {
		// If current element is smaller than the pivot
		if (input[j] < pivot) {
			// Increment index of smaller element
			i++;
			swap(input[i], input[j]);
		}
	}
	swap(input[i + 1], input[end]);
	return (i + 1);
}
void quickSort(int input[], int start, int end) {
	/*
		Don't write main().
		Don't read input, it is passed as function argument.
		Change in the given array itself.
		Taking input and printing output is handled automatically.
	*/
	if (start < end) {
		// pi is partitioning index, arr[p]
		// is now at right place
		int pi = partitionArray(input, start, end);
		// Separately sort elements before
		// partition and after partition
		quickSort(input, start, pi - 1);
		quickSort(input, pi + 1, end);
	}
}
