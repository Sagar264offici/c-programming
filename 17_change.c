#include <stdio.h>
int change(int a);
int change(int a){
    a=77; //Misnower
    return 0;
}


int main() {
    int b=22;
     change(b);


printf("%d\n",b);
return 0;
}