#include <stdio.h>
// Wite a reccursive function to calculate the sum of first n natural numbers.

int sum_natural(int);
int sum_natural(int n){
if(n==1){
    return 1;
}


    // sum_natural(n)=1+2+3+4+5+.... n-1 +n;
    // sum(n)= sum(n-1)+ n;
    return sum_natural(n-1) + n;
}

int main() {
printf("The sum of first 5 natural no. is %d\n", sum_natural(5));

return 0;
}