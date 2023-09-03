#include<stdio.h> //this is for printf and scanf func.s.
#include<stdlib.h> //this is for general usage.
#include<math.h> //this is for using math functions.
#include<limits.h> //this is for getting info about limits.
#include<stdint.h> //this is for adjusting bits used.
#include <locale.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


	
	double getRandomNumber(double lower_limit, double upper_limit){
		return lower_limit + (upper_limit - lower_limit)*(float)rand()/RAND_MAX;
		}

	double calculatePi(int max_iteration){
		double x, y;
		int inside_the_circle = 0;
		for(int i = 0; i < max_iteration; i++)
		{
			x = getRandomNumber(-1, 1);
			y = getRandomNumber(-1, 1);
			if(x*x + y*y <= 1){
				inside_the_circle++;
			}
		}
		return (inside_the_circle * 4.0)/max_iteration;
	}
		
		int main(){
			int max_iteration = 1000000;
			srand(time(NULL));
			double pi = calculatePi(max_iteration);	
			printf("Estimated Pi=%.3lf for %d iteration\n", pi, max_iteration);	
			return 0;
		}