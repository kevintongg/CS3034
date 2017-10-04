void insertion_sort(int *a, int n) {
  int j, temp;
  for (int i = 1; i <= n - 1; i++) {
    j = i;
    while (j > 0 && a[j] < a[j - 1]) {
      temp = a[j];
      a[j] = a[j - 1];
      a[j - 1] = temp;
      j--;
    }
  }
}
