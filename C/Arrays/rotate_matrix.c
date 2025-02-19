#include <stdio.h>

void rotate90(int (*matrix)[3], int rows) {
  for (int i = 0; i < rows; ++i) {
    for (int j = i+1; j < 3 ; ++j) {
      matrix[i][j] = matrix[i][j] ^ matrix[j][i];
      matrix[j][i] = matrix[i][j] ^ matrix[j][i];
      matrix[i][j] = matrix[i][j] ^ matrix[j][i];
    }
  }
  // transpose done
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < 3 / 2; ++j) {
      matrix[i][j] = matrix[i][j] ^ matrix[i][3 - j - 1];
      matrix[i][3 - j - 1] = matrix[i][j] ^ matrix[i][3 - j - 1];
      matrix[i][j] = matrix[i][j] ^ matrix[i][3 - j - 1];
    }

  } // flip done
}

void printMatrix(int matrix[][3], int rows) {
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < 3; ++j) {
      printf("%d ", *(*(matrix + i) + j));
    }
    printf("\n");
  }
}
int main() {
  int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  rotate90(matrix, 3);

  printMatrix(matrix, 3);

  return 0;
}
