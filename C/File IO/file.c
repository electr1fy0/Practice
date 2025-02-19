#include <stdio.h>
#include <stdlib.h>


void numToStr(int num, char target[]) {
if (num == 0) {
    target[0] = '0';
    target[1] = '\0';
    return;
}
int length = 0, temp_num = num;
  while (temp_num > 0) {
    temp_num /= 10;
    length++;
  }

  for (int i = length - 1; i >= 0; --i) {
    target[i] = (num % 10) + '0';
    num /= 10;
  }
  target[length] = '\0';
}


int main() {
  FILE *score_file_ptr;
  int score = 50;
  char char_score[50];
  numToStr(score, char_score);
  score_file_ptr = fopen("score.txt", "a"); // syntax: p = fopen("filename", "mode");

  if (score_file_ptr == NULL) {
    printf("Error occured while creating a file.\n");

    exit(1); // terminates the entire program
  }

  char str[] = "The highest scores are:\n";
  fputs(str, score_file_ptr);
  fputs(char_score, score_file_ptr);

  fclose(score_file_ptr);
  printf("Data written.");
  int i = 0;

  // printf("%s", char_score);
  return 0;
}
