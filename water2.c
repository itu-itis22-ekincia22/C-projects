#include<stdio.h> //this is for printf and scanf func.s.
#include<stdlib.h> //this is for general usage.
#include<math.h> //this is for using math functions.
#include<limits.h> //this is for getting info about limits.
#include<stdint.h> //this is for adjusting bits used.
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	double temp;
	int unit;
	int alt;
	printf("Enter the temperature: ");
	scanf("%lf", &temp);
	printf("Enter the unit of temperature (Celsius:1, Fahrenheit:2): ");
	scanf("%d", &unit);
	printf("Enter altitude in meters: ");
	scanf("%d", &alt);
	double tempalt = 100 - alt/300;
	double tempalt2 = 212 - (alt/100)*33.8;
	if (unit == 1){
		if (temp < 0){
			printf("Water is Solid (Ice) at %.2lf degrees Celsius\n", temp);
		}
		else if ((temp >= 0) && (temp < tempalt)){
			printf("Water is Liquid at %.2lf degrees Celsius\n", temp);
		}
		else {
			printf("Water is Gas (Vapor) at %.2lf degrees Celsius\n", temp);
		}
	}
	else if (unit == 2){
		if (temp < 31){
			printf("Water is Solid (Ice) at %.2lf degrees Fahrenheit\n", temp);
		}
		else if((temp >= 32) && (temp < tempalt2)){
			printf("Water is Liquid at %.2lf degrees Fahrenheit\n", temp);
		}
		else {
			printf("Water is Gas (Vapor) at %.2lf degrees Fahrenheit\n", temp);
		}
	}
	else {
		printf("Please enter temperature unit as either 1 (celsius) or 2 (fahrenheit).\n");
	return 1;	
}
	
	
	
	
return 0;
}