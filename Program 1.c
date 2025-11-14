#include <stdio.h>
int main() {
   int radius;
   float PI = 3.14, area, circumference;
    printf("Enter radius of circle: ");
    scanf("%d", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area of circle: %.2f\n", area);
    printf("Circumference of circle: %.2f\n", circumference);
    return 0;
}