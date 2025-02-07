/* Write the program to print the the multipliaction table of the given no. */
#include <stdio.h>


 int main() {
int n;
printf("Enter the no.");
scanf("%d", &n);
for(int i=0; i<=10; i++){
printf("%d x %d= %d\n", n, i, n*i);
}return 0;
}