void helper(int input[], int size, int k, int output[], int osize) {
  if (size == 0) {
    if (k == 0) {
      for (int i = 0; i < osize; i++) {
        cout << output[i] << " ";
      }
      cout << endl;
    }
    return;
  }
  output[osize] = input[0];
  helper(input + 1, size - 1, k - input[0], output, osize + 1);
  helper(input + 1, size - 1, k, output, osize);
  return;
}
void printSubsetSumToK(int input[], int size, int k) {
  // Write your code here
  int output[1000];
  helper(input, size, k, output, 0);
}