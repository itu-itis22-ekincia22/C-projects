#include <stdio.h>
int main() {
float fah, cel;
printf("Enter Fahrenheit:");
scanf("%f", &fah);
cel = (fah-32)/1.8;
printf("%.2f fahrenheit is %.3f celcius\n", fah, cel);
}
