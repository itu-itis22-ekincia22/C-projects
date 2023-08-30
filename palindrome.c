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


int numDigits(int number)
{
    int count = 0;
    while(number != 0){
        count++;
        number /= 10;
    }
    return count;

}

int digitsPlace(int number, int place){
    int digit;
    for (int x=1; x<=place; x++){
        digit = number%10;
        number /= 10;
    }
    return digit;
}

bool isPalindrome(int number){
    int digits = numDigits(number);
    if (digits == 1){
        return true;
    }
    int digitLeft;
    int digitRight;

    int left = digits;
    int right = 1;
    bool palindrome = true;

    for (int x = 1; x <= digits; x++){
    digitLeft = digitsPlace(number, left);
    printf("Left Digit: %d", digitLeft);
    digitRight = digitsPlace(number, right);
    printf("Right Digit: %d", digitRight);

    if (digitLeft != digitRight){
        palindrome = false;
    }
    left--;
    right++;
    
    if(left >= right){
        break;
    }
    }
    return palindrome;
}

int main(){
    int number;
    printf("Enter a number or (-1) to quit: ");
    scanf("%d", &number);
    while(number >= 0){
        bool palCheck = isPalindrome(number);
        if (palCheck)
        {
            printf("This number is a palindrome.\n");
        }
        else {
            printf("This number is not a palindrome.\n");
        }
    printf("Enter a number or (-1) to quit: ");
    scanf("%d", &number);
    }
return 0;
}