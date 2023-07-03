#include <stdio.h>
#include <math.h>

// Функція для обчислення довжини вектора
double vectorLength(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;  // Різниця між координатами x2 і x1
    int dy = y2 - y1;  // Різниця між координатами y2 і y1
    double length = sqrt(dx*dx + dy*dy);  // Використовуємо формулу довжини вектора
    return length;
}

int main() {
    int x1, y1, x2, y2;
    printf("Enter the coordinates of the start and end of the vector:\n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    
    double result = vectorLength(x1, y1, x2, y2);  // Викликаємо функцію для обчислення довжини вектора
    printf("The length of the vector: %.6f\n", result);  // Виводимо довжину вектора з точністю до шести знаків після коми
    scanf(" ");
    return 0;
}