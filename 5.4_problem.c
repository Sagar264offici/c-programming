#include <stdio.h>
    //write a function to calculate the force of mass 'm' exterted by earth. consider g=9.8m/s
float force(float);

    float force(float mass){
        return mass*9.8;
    }


int main() {
int m;
printf("Enter the mass \n");
scanf("%d",&m);
printf("Thee value of force is %.2f\n", force(m));
return 0;
}