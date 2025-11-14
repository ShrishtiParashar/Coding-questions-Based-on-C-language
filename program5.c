#include <stdio.h>
int main() {
    float principal, rate, time, simple_interest;
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    simple_interest = (principal * rate * time) / 100;
    printf("Simple Interest: %.2f\n", simple_interest);
    return 0;
}