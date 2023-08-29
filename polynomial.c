#include <math.h>
#include <stdio.h>
int main() {
double a, b, c;
printf("Enter 3 coefficients for second-order polynomial:");
scanf("%lf, %lf, %lf", &a, &b, &c);
double discriminant = (b*b) – (4*a*c);
double x1 = (-b) - sqrt(discriminant)/(2*a);
double x2 = (-b) + sqrt(discriminant)/(2*a);
printf("Roots: x1: %.2lf, x2: %.2lf\n", x1, x2);
}
