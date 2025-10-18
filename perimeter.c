#include <stdio.h>
#define PI 3.1416
int main() {
    float radius, side, length, breadth;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    printf("Circle Area = %.2f\n", PI * radius * radius);
    printf("Circle Perimeter = %.2f\n\n", 2 * PI * radius);
    printf("Enter side of the square: ");
    scanf("%f", &side);
    printf("Square Area = %.2f\n", side * side);
    printf("Square Perimeter = %.2f\n\n", 4 * side);
    printf("Enter length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);
    printf("Rectangle Area = %.2f\n", length * breadth);
    printf("Rectangle Perimeter = %.2f\n", 2 * (length + breadth));

    return 0;
}
