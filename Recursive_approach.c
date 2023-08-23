#include <stdio.h>

int recursiveF(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    return recursiveF(n - 3) + recursiveF(n - 2);
}

int main() {
    int n = 10; // Replace with desired value of n
    int result = recursiveF(n);
    printf("F(%d) = %d\n", n, result);
    return 0;
}
