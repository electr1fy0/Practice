
#include <stdio.h>

int checkMagic(int matrix[10][10], int m, int n) {
  int magicsum = 0;
  for (int i = 0; i < m; ++i) {
    magicsum += matrix[i][0];
  }

  // check all rows
  for (int i = 0; i < m; ++i) {
    int rowsum = 0;
    for (int j = 0; j < n; ++j) {
      rowsum += matrix[i][j];
    }
    if (rowsum != magicsum)
      return -1;

  }
  for (int i = 0; i < n; ++i)  {
      int columnsum = 0;
      for (int j = 0; j < m; ++j) {

              columnsum += matrix[j][i];


      }
      if (magicsum != columnsum) return -1;
  }


  int diag1 = 0;
  int diag2 = 0;
  for (int i = 0; i < n; ++i) {
    diag1 += matrix[i][i];
    diag2 += matrix[i][n - i - 1];
  }
  if (diag1 != magicsum || diag2 != magicsum)
    return -1;
  return 1;
}

int main() {
  int m, n;
  scanf("%d %d", &m, &n);

  int arr[m][n];

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      scanf("%d", &arr[i][j]);
    }
  }
  if (checkMagic(arr, m, n))
    printf("magic\n");
  else
    printf("not magic");

  return 0;
}
