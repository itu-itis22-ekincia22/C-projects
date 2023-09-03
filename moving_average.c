#include<stdio.h> //this is for printf and scanf func.s.
#include<stdlib.h> //this is for general usage.
#include<math.h> //this is for using math functions.
#include<limits.h> //this is for getting info about limits.
#include<stdint.h> //this is for adjusting bits used.
#include <locale.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define ARRAY_LENGTH 16
#define WINDOW_LENGTH 3

int main(){
    double data[ARRAY_LENGTH];
    double c_avg[ARRAY_LENGTH];
    double m_avg[ARRAY_LENGTH];
    double sum = 0.0;

    for (int i = 0; i < ARRAY_LENGTH; i++){
        printf("Enter data for Week %d:", (i+1));
        scanf("%lf", &data[i]);
        sum += data[i];
        c_avg[i] = sum / (i+1);
    }
    for (int i = 0; i < WINDOW_LENGTH; i++)
{
    m_avg[i] = 0;
}

    for (int i = WINDOW_LENGTH - 1; i < ARRAY_LENGTH; i++)
    {
        sum = 0;
        for (int j = 0; j < WINDOW_LENGTH; j++){
            sum += data[i-j];
        }
        m_avg[i] = sum / WINDOW_LENGTH;
    }
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
    
        printf("Week %d: %.3lf  %.3lf  %.3lf\n", (i+1), data[i], c_avg[i], m_avg[i]);
    }
    return 0;
}