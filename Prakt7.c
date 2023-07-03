#include <stdio.h>
#include <math.h>

int findCircleIntersection(double x1, double y1, double r1, double x2, double y2, double r2) {
    // Обчислюємо відстань між центрами колів
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Перевіряємо, чи кола розташовані одне в одного
    if (distance > r1 + r2) {
        // Кола не перетинаються
        return 0;
    } else if (distance < fabs(r1 - r2)) {
        // Одне коло знаходиться всередині іншого
        return 0;
    } else if (distance == 0 && r1 == r2) {
        // Кола співпадають
        return -1;
    } else {
        // Кола перетинаються
        return 2;
    }
}

int main() {
    double x1, y1, r1, x2, y2, r2;
    printf("Enter the coordinates of the centers of the first circle (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the radius of the first circle (r1): ");
    scanf("%lf", &r1);
    printf("Enter the coordinates of the centers of the second circle (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter the radius of the second circle (r2): ");
    scanf("%lf", &r2);

    int intersectionPoints = findCircleIntersection(x1, y1, r1, x2, y2, r2);
    
    if (intersectionPoints == -1) {
        printf("The circles match. Number of intersection points: -1\n");
    } else {
        printf("Number of intersection points: %d\n", intersectionPoints);
    }
    scanf(" ");
    return 0;
}
