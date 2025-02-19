// You are using GCC
#include <stdio.h>

void rotateArr(int *arr, int *rotated, int size, int m) {
// ensure m is within bounds
m = m % size;

// store
int storage[m];

for (int i = 0; i < m; ++i) {
    storage[i] = arr[size - m + i];
} // works

// shift
int index = 0;
for (int i = m; i < size; ++i) {
    rotated[i] = arr[index++];
}

// refit
for (int i = 0; i < m; ++i) {
    rotated[i] = storage[i];
}

}

void printArr(int *arr, int size) {
  for (int i = 0; i < size; ++i)
    printf("%d ", *(arr + i));
}

int main() {
  int n;
  scanf("%d", &n);
  int arr[n], rotated[n];

  for (int i = 0; i < n; ++i)
    scanf("%d", arr + i);

  int m;
  scanf("%d", &m);

  rotateArr(arr, rotated, n, m);
  printArr(rotated, n);

  return 0;
}
