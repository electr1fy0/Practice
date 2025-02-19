#include <stdio.h>
#include <string.h>

void bubbleSort(char str[], int n) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n - i - 1; ++j) {
      if (str[j] > str[j + 1]) {
        char temp = str[j];
        str[j] = str[j + 1];
        str[j + 1] = temp;
      }
    }
  }
}

void swap(char **)


int main() {
    char *words[] = {"cat", "dog", "tac", "god", "act"};
int size = sizeof(words) / sizeof(words[0]);

groupAnagrams(words, size);



  return 0;
}
