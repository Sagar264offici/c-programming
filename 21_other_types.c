#include <stdio.h>


int main() {
    char i='A';
    char*j=&i;
 float k=5.232;
 float*k1 =&k;

    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", &j);
    printf("The address of i is %d\n", *(&i));


return 0;
}
