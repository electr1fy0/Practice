#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// write a fn to dynamically allocate a m x n matrix, fill it with random nums
// and print it

int **createMatrix(int m, int n) {
  int **matrix = (int **)malloc(m * sizeof(int *));
  for (int i = 0; i < m; ++i) {
    matrix[i] = (int *)malloc(n * sizeof(int));
  }
  return matrix;
}

void fillMatrix(int **matrix, int m, int n) {
  srand(time(NULL));
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      *(*(matrix + i) + j) = rand() % 20;
    }
  }
}
void printMatrix(int **matrix, int m, int n) {
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      printf("%d ", *(*(matrix + i) + j));
    }
    printf("\n");
  }
}
void freeMatrix(int **matrix, int m) {
    for (int i = 0; i < m; ++i) {
        free(matrix[i]);
    }
    free(matrix);

}

int main() {
  int m = 3, n = 4;
  int **matrix = createMatrix(m, n);
  fillMatrix(matrix, m, n);
  printf("Generated Matrix:\n");
  printMatrix(matrix, m, n);
  freeMatrix(matrix, m);

  return 0;
}
