#include <stdio.h>


int main() {
for (int i=0; i<15;i++)
{
    if(i==5){
        break; //exit the loop!
        //continue; //skip the iteration now
    }
    printf("i is \t %d\n", i);
}
printf("For loop is done");
return 0;
}