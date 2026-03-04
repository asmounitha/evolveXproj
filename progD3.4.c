#include <stdio.h>

int main() {
    int N, i;
    unsigned long long product = 1;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        product *= i;
    }
    printf("The product of the first %d natural numbers is: %llu\n", N, product);

    return 0;
}