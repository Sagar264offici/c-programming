/* Write the program to print the the multipliaction table of the given no. */
#include <stdio.h>


 int main() {
int i=1;
int sum=0;


while (i<=10){
    sum +=i;
    i++;
}
printf("The sum of first 10 natural no. is = %d\n", sum);
return 0;
 }