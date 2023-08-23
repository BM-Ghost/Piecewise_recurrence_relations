#include <stdio.h>

#define MAX_N 100

int memo[MAX_N];

int memoizedF(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (memo[n] != -1) return memo[n];
    memo[n] = memoizedF(n - 3) + memoizedF(n - 2);
    return memo[n];
}

int main() {
    int n = 10; 
    for (int i = 0; i < MAX_N; i++) memo[i] = -1;
    int result = memoizedF(n);
    printf("F(%d) = %d\n", n, result);
    return 0;
}
