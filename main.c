#include <stdio.h>
#include <math.h>

int findCircleIntersection(int x1, int y1, int r1, int x2, int y2, int r2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (distance > r1 + r2) {
        return 0; // Кола не перетинаються
    } else if (distance < fabs(r1 - r2)) {
        return 0; // Одне коло міститься всередині іншого
    } else if (distance == 0 && r1 == r2) {
        return -1; // Безкінечно багато точок перетину (кола ідентичні)
    } else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        return 1; // Одна точка перетину
    } else {
        return 2; // Дві точки перетину
    }
}

int main() {
    int x1, y1, r1, x2, y2, r2;
    printf("Enter the coordinates of the centers and the radius of two numbers (x1, y1, r1, x2, y2, r2): ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

    int intersectionPoints = findCircleIntersection(x1, y1, r1, x2, y2, r2);
    printf("Number of intersection points: %d\n", intersectionPoints);

    return 0;
}
