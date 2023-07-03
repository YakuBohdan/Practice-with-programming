#include <stdio.h>

int main() {
    int t1, t2, t3;
    printf("Enter three values: ");
    scanf("%d %d %d", &t1, &t2, &t3);

    double total_time = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;
    double time_to_eat_cake = 1.0 / total_time;

    printf("The time required to eat the pie: %.2f hours.\n", time_to_eat_cake);

    scanf(" "); // Зчитуємо пробіл, щоб консоль не закрилась

    return 0;
}