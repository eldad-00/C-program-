//simple C program (Hellow world)
/*
Name; Eldad Mwaura 
Reg no;CT101/G/26651/25
Date;25.9.2025
Description;Helloworld c
*/


//main function 
#include <stdio.h>

int main() {
    int age;
    double income;
    
    //prompt user for age and income
    printf("Enter your age:");
    scanf("%d", &age);
    
    printf("Enter your annual income");
    scanf("%lf", &income);
    
    // check qualification status 
    if (age >= 21 &income >= 21000) {
    printf("Congratulations! you qualify for a loan.\n");
    } else {
        printf("Unfortunately, you do not qualify for a loan.\n");
    }    
    
    return 0;
    
    }