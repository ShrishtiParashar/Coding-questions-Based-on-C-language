#include <stdio.h>
int main () {
    float s1, s2, s3, s4, s5, total, average;
    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);
    total = s1 + s2 + s3 + s4 + s5;
    average = (total / 500) * 100;
    printf("Percentage is: %.2f%%\n", average);
    return 0;
}