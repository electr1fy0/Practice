#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printMatrix(int (*matrix)[3], int size) {
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      printf("%d ", *(*(matrix + i) + j));
    }
    printf("\n");
  }
}

void bubbleSort(int *arr, int size) {
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size - i - 1; ++j) {
      if (*(arr + j) > *(arr + j + 1)) {
          int temp = *(arr + j);
          *(arr + j) = *(arr + j + 1);
          *(arr + j + 1) = temp;
      }
    }
  }
}

void sortMatrix(int (*matrix)[3], int size) {
  int arr_size = size * 3;
  int arr[arr_size];
  int index = 0;

  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      *(arr + index++) = *(*(matrix + i) + j);
    }
  }


  bubbleSort(arr, arr_size);
  int row = 0;

  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      matrix[i][j] = arr[row++];
    }
  }
}

void fillMatrix(int (*matrix)[3], int size) {
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      *(*(matrix + i) + j) = rand() % 25;
    }
  }
}

int main() {
  int size = 3;
  int matrix[3][3];

  srand(time(NULL));

  printf("OG matrix: \n");

  fillMatrix(matrix, size);
  printMatrix(matrix, size);

  sortMatrix(matrix, size);
  printf("Sorted matrix: \n");

  printMatrix(matrix, size);


  return 0;
}
