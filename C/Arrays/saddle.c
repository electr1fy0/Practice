#include <limits.h>
#include <stdio.h>

// to find: value max in row and and min in column

int findSaddlePoint(int matrix[10][10], int n, int m) {
  for (int i = 0; i < n; ++i) {
    int column = -1;
    int min = INT_MAX;
    for (int j = 0; j < m; ++j) {
      if (min > matrix[i][j]) {
        min = matrix[i][j];
        column = j;
      }
    }

    int isSaddle = 1;
    // iterate over all rows again with fixed column
    for (int k = 0; k < n; ++k) {
      if (min <matrix[k][column]) {
        isSaddle = 0;
        break;
      }
    }
    if (isSaddle) return min;

  }
  return -1;
}



int main() {
  int n, m;
  scanf("%d %d", &n, &m);

  int arr[10][10];

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      scanf("%d", &arr[i][j]);
    }
  }

  printf(" Saddle point (not -1) : %d ", findSaddlePoint(arr, n, m));

  return 0;
}
