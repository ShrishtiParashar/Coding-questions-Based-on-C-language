#include <stdio.h>
int main () {
    float basic, da, hra, gross;
    printf("Enter the basic salary: ");
    scanf("%f", &basic);
    da = basic * 0.8;
    hra = basic * 0.2;
    gross = basic + da + hra;
    printf("Gross Salary: %.2f\n", gross);
    return 0;
}