#include <stdio.h>
int main(){



int a = 0; 
int b = 0; 
int c = 0; 
printf("Please enter the first number: ");
scanf("%d", &a);
printf("Please enter the second number: ");
scanf("%d", &b);
c = a + b;
printf("The sum of the numbers %d, and %d is: %d\n", a, b, c);
return 0;
}