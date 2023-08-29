#include <stdio.h>
#include <math.h>
int main() {
int height, weight ;
printf("Input height(cm) and weight(g):");
scanf("%d %d", &height, &weight);
double bsa = 0.0003207*(pow(height, 0.3))*(pow(weight, 0.7285 - 0.0188 * log10(weight)));
printf("BSA: %.2lf\n", bsa);
return 0;
}
