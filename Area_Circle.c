// Program to find area of a circle

#include <stdio.h>
#define PI 3.14

int main(void) {
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area of the circle = %.2f\n", area);
    return 0;
}