int findDuplicate(int *arr, int size) {
  int sum1 = 0;
  for (int i = 0; i < size; i++) {
    sum1 += arr[i];
  }
  int sum2 = ((size - 1) * (size - 2)) / 2;
  return sum1 - sum2;
}