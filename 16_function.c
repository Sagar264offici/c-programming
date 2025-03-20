#include <stdio.h>

int sum(int,int); // Function prototype.


int sum(int x,int y){    //Functon defination.
    printf("The sum is %d\n", x+y);
    return x+y;  //Return Type
}


int main() {
int a=1;
int b= 2;
sum(a,b);  // Functon calling.

return 0;
}