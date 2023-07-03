#include <stdio.h>

// Функція для знаходження НСД двох чисел
int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return findGCD(b, a % b);
    }
}

// Функція для знаходження НСК двох чисел
int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int numbers[20];
    printf("Enter the integers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int lcm = numbers[0];
    for (int i = 1; i < n; i++) {
        lcm = findLCM(lcm, numbers[i]);
    }

    printf("Least Common Multiple: %d\n", lcm);
    scanf(" ");

    return 0;
}

