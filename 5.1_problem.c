// write a Program with three functions.
// Good morning function which prints "Good Morning" 
// Good Afternoon function which prints "Good Afternoon"
// Good Night function which prints "Good night".


#include<stdio.h>
void good_morning();
void good_afternoon();
void good_night();

void good_morning(){
    printf("good Morning\n");
}
void good_afternoon(){
    printf("good Afternoon\n");
}
void good_night(){
    printf("good night\n");
}
int main(){

    good_morning();
    good_afternoon();
    good_night();


return 0;
}