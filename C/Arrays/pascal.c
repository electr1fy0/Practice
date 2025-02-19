#include <stdio.h>
#define MAX 10
// do pascal's triangle

//     1
//    1 1
//   1 2 1
//  1 3 3 1
//
void printPascal(int n) {
  int triangle[MAX][MAX] = {0};

  for (int i = 0; i < n; ++i) {
    triangle[i][0] = triangle[i][i] = 1;

    for (int j = 1; j < i; j++) {
      triangle[i][j] = triangle[i - 1][j - 1] + triangle[i -1][j];
    }
  }

  // printing the triangle

  for (int i = 0; i < n; ++i) {
    for (int space = 0; space < n - i - 1; space++)
      printf(" ");
    for (int j = 0; j <= i; ++j) {
      printf("%d ", triangle[i][j]);
    }

    printf("\n");
  }
}

int main() {

  int n;
  printf("enter number of rows\n");
  scanf("%d", &n);

 printPascal(n);

return 0;
}
