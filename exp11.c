#include <stdio.h>

int main() {
    int n;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %d", n, factorial);

    return 0;
}
