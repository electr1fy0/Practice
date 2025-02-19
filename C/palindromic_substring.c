// You are using GCC
#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int start, int end) {
  while (start < end) {
    if (str[start] != str[end]) {
      return 0;
    }
    start++;
    end--;
  }
  return 1;
}

int findPalindrome(char *str) {
  int n = strlen(str);
  int max_length = 0;
  int left = -1, right = -1;

  int i, j;
  for (i = 0; i < n; ++i) {
    for (j = n - 1; j > i; --j) {
      if (str[i] == str[j]) {
        if (isPalindrome(str, i, j)) {
          int current_length = j - i + 1;
          if (current_length > max_length) {
            max_length = current_length;
            left = i;
            right = j;
          }

          break;
        }
      }
    }
  }
  printf("%d %d ", left, right);
  return right - left + 1;
}

int main() {
  char str[20];
  scanf("%s", str);

  int x = findPalindrome(str);

  if (x > 0)
    printf("Ans: %d", x);
  else
    printf("No palindromes");

  return 0;
}
