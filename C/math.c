#include <stdio.h>


int gcd(int a, int b) {
if (b == 0) return a;
return gcd(b, a % b);
}


int lcm(int a, int b) {
    return a * b / gcd(a, b);
}


int main() {
    int a = 45, b = 75;
    printf("%d %d", gcd(a, b), lcm(a, b));
    return 0;
}
