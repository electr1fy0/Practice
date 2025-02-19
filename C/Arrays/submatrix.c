#include <stdio.h>

int counter(int matrix[10][10], int n, int k) {
  int count = 0;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      for (int size = 1; size + i <= n && size + j <= n; ++size) {
        int sum = 0;

        for (int x = i; x < size + i; ++x) {
          for (int y = j; y < size + j; ++y) {
            sum += matrix[x][y];
          }
        }
        if (sum == k)
          count++;
      }
    }
  }
  return count;
}

int main() {
  int m;
  scanf("%d", &m);
  int k = 3;
  int arr[m][m];

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < m; ++j) {
      scanf("%d", &arr[i][j]);
    }
  }

  printf("%d ", counter(arr, m, k));

  return 0;
}
