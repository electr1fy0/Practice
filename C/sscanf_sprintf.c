#include <stdio.h>
#include <string.h>

void fn(int *a, int *b, int *c) {
  *a = 5;
  *b = 6;
  *c = 7;
}

int main() {
  char input[] = "5 mess 0.5555";

  int a;
  char mess[50];
  float marks;
  char output[50];

  char test[60];
  int c;
  int i = 0;


  while ((c = getchar()) != '\n') {
      test[i++] = c;
  }
  printf("%s", test);

  sscanf(input, "%d %s %f", &a, mess, &marks);

  // sprintf(output, "%d %s %.3f", a, mess, marks);

  // printf("%s", output);
}
