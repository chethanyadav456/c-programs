#include <stdio.h>

int main(void) {
    float length, breadth, area;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    area = length * breadth;
    printf("Area of the rectangle = %.2f\n", area);
    return 0;
}