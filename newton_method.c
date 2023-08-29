#include<stdio.h> //this is for printf and scanf func.s.
#include<stdlib.h> //this is for general usage.
#include<math.h> //this is for using math functions.
#include<limits.h> //this is for getting info about limits.
#include<stdint.h> //this is for adjusting bits used.
#include <locale.h>
#include <string.h>
#include <stdlib.h>

#define ERROR_TOLERANCE 0.001
#define EPSILON 0.001

int main()
{
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	
	float x = 1;
	float y, y1, y2, m;

	while (fabs(a*x*x + b*x + c) > ERROR_TOLERANCE)
	{
	y1 = a*(x + EPSILON)*(x + EPSILON) + b*(x + EPSILON) + c;
	y2 = a*(x - EPSILON)*(x - EPSILON) + b*(x - EPSILON) + c;
	
	m = (y1-y2)/(2*EPSILON);	
	if(m == 0){
	m+=EPSILON;
	}
	y = a*x*x + b*x +c;
	x = x - y/m;
	printf("point: (%.2f %.2f)\n", x, y);
	}
	printf("Root: %.2f\n", x);


}