#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    if (start >= end) return;
    char temp = str[start];
    str[start] = str[end - 1];
    str[end - 1] = temp;

    reverse(str, start + 1, end - 1);
}


int main() {

   char str[] = "meowingcat";
   int length = strlen(str);
   reverse(str, 0, length);
printf("%s", str);
    return 0;
}
