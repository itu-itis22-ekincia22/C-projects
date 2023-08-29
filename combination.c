#include<stdio.h> //this is for printf and scanf func.s.
#include<stdlib.h> //this is for general usage.
#include<math.h> //this is for using math functions.
#include<limits.h> //this is for getting info about limits.
#include<stdint.h> //this is for adjusting bits used.
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int factorial(int x);
int combination(int n, int r);

int factorial(int x){
	int result =1;
	for(int i=2; i<=x; i++){
	result = result*i;
}
	return result;
}


int combination(int n, int r){
	
	return factorial(n)/(factorial(r)*factorial(n-r));

}

int main(){
	int n, r;
	int result = combination(n, r);
	printf("Enter n and r:");
	scanf("%d %d", &n, &r);
	printf("%d", result);
	return EXIT_SUCCESS;		
}