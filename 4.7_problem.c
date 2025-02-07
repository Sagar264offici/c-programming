#include <stdio.h>
// Write a program to calculate the factorial of a given no. using for loop

int main() {
    int product = 1;
    int n;
    printf("Enter the no. ");
    scanf("%d", &n);
     for(int i=1; i<=n; i++)
{
    product *=i;
}
    printf("The factorial of %d is =\t%d\n",n, product);    
return 0;
}