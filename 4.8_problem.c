#include <stdio.h>
// Write a program to calculate the factorial of a given no. using for loop

int main() {
    int i=1;
    int product = 1;
    int n=1;
    printf("Enter the no. ");
    scanf("%d", &n);
     while(i<=n)
{
    product *=i;
    i++;
}
    printf("The factorial of %d is =\t%d\n",n, product);    
return 0;
}