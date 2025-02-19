// You are using GCC
#include <stdio.h>


int hasZero(char n[], int i) {
    if(n[i] = '\0') return 0;
    if (n[i] == '0') return 1;
    return hasZero(n, i + 1);
}

int isDuckNumber(char n[]) {
    if (n[0] == '0') return 0;

    return hasZero(n, 1);
}

int main() {
    char n[50];
    scanf("%s", n);
    if (isDuckNumber(n)) {
        printf("%s is a duck number.",n);
    } else printf("%s is not a duck number.",n);

    return 0;
}
