#include <stdio.h>

float average(int a, int b, int c);
float average(int a, int b, int c){
    return (a+b+c)/3;
}

int main() {
int a,b,c;
printf("Enter the the no. to find average\n");
scanf("%d %d %d",&a,&b,&c);

printf("The average of %d %d %d is %f",a,b,c, average(a,b,c));
return 0;
}