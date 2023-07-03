#include <stdio.h>

int main() {
    int n;
    printf("Enter a natural number (1 < n < 150): ");
    scanf("%d", &n);

    int count = 0; // Лічильник рівних дільників

    for (int m = 1; m <= n; m++) {
        if ((n / m) == (n % m)) {
            count++;
        }
    }

    printf("Number of equal divisors of %d: %d\n", n, count);
scanf(" ");
    return 0;
}
