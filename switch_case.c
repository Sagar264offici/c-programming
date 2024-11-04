/*    Quick quiz:  Write a program to find Grade of a student given his marks based on below:
   90 - 100 => A
   80 - 90 => B
   70 - 80 => C
   60 - 70 => D
   70 -

 */ 


#include<stdio.h>

char grade (int marks) {

switch (marks / 10)
{
case 10:
case 9:
    return 'A';
    break;
case 8:
    return 'B';
    break;
case 7:
    return 'C';
    break;
case 6:
    return 'D';
    break;
default:
    return 'F';
    break;
}

}

int main(){
    char result = grade(100);
    printf("%c\n", result);
    return 0;
}