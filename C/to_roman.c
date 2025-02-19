#include <stdio.h>

void intToRoman(int num, char *result) {
  struct {
    int value;
    const char *symbol;
  } roman[] = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
               {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
               {5, "V"},    {4, "IV"},   {1, "I"}};
  int i = 0;
  while (num > 0) {
    while (num >= roman[i].value) {
      num -= roman[i].value;


      // Copy the symbol string to result
      const char *ptr = roman[i].symbol;
      while (*ptr) {
        *result++ = *ptr++;
      }
    }
    i++;
  }
}

int main() {
  int num = 3724;
  char romanResult[50];

  intToRoman(num, romanResult);
  printf("%s", romanResult);

  return 0;
}
