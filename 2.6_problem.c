/*    Quick quiz:  Write a program to find Grade of a student given his marks based on below:
   90 - 100 => A
   80 - 90 => B
   70 - 80 => C
   60 - 70 => D
   70 -

 */ 


#include <stdio.h>

int main()
{
    char grade;
    int marks;
    printf("Enter the Marks\t");
    scanf("%d", &marks);
    if (marks <= 100 && marks >= 90)
    {
        grade = 'A';
    }
    else if (marks <= 90 && marks >= 80)
    {
        grade = 'B';
    }
    else if (marks <= 80 && marks >= 70)
    {
        grade = 'C';
    }
    else if (marks <= 70 && marks >= 60)
    {
        grade = 'D';
    }
    else if (marks <= 60 && marks >= 50)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }

    return 0;
}