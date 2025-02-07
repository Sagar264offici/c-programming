/* Write the program to implement progrm 5 using for loop and do-while loop.  */
#include <stdio.h>


int main() {
int i=1;
int sum=0;

do {
    sum +=i;
    i++;
}while (i<=10);
printf("The sum of first 10 natural no. is = %d\n", sum);
return 0;
}