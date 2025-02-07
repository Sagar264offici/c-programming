/* Write the program to print the the multipliaction table of the given no. in reverse order. */
#include <stdio.h>


 int main() {
int n=10;


for(int i=10; i; i--){
printf("%d x %d= %d\n", n, i, n*i);
}return 0;
}