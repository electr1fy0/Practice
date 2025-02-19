#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int word;
  // for (int i = 0; i < 4; ++i) {}
  word = rand() % 26 + 97;
  char w = (char)word ;
  printf("%c\n", w);

  return 0;
}
