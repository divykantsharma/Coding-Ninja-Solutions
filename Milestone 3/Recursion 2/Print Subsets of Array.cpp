void subs(int input[], int size, int output[], int m) {
  if (size == 0) {
    for (int i = 0; i < m; i++)
      cout << output[i] << " ";
    cout << endl;
    return;
  }

  subs(input + 1, size - 1, output, m);
  int newout[500];
  for (int i = 0; i < m; i++) {
    newout[i] = output[i];
  }
  newout[m] = input[0];
  subs(input + 1, size - 1, newout, m + 1);
}

void printSubsetsOfArray(int input[], int size) {

  int output[500];
  subs(input, size, output, 0);
}