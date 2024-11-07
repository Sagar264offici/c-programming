#include<stdio.h>
// Write a program to check the following year is leap year or not.
int main(){
    int year;
    printf("Enter year: \n");
    scanf("%d", &year);

    if ((year % 4 ==0 && year%100!=0) || year % 400== 0){
        printf("This isn't a leap year\n");
    }
    else { 
        printf("This is leap year\n");
    }

    return 0;
}