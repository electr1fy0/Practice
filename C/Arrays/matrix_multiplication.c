#include <stdio.h>

void multiplier(int m1, int m2, int n1, int n2, int (*A)[n1], int (*B)[n2],
                int (*C)[n2]) {
  // m is row count
  // n is column count
  for (int i = 0; i < m1; ++i) {// rows of A
    for (int j = 0; j < n2; ++j) { // columns of B
      for (int k = 0; k < m2; ++k) { // common dimension
        C[i][j] += A[i][k] * B[k][j]; // column of A, row of B
      }
    }
  }
}

int main() {
  int A[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
  int B[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

  int C[4][4] = {0};
  multiplier(4, 3, 3, 4, A, B, C);
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }
  return 0;
}
