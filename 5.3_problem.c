#include <stdio.h>
float c2f(float);
float c2f(float t) 
{
     return ((t * 9) / 5) + 32; 
     }

int main() {
  float t;
  printf("Enter The temperture to  covert celsuis to farehanhite:   ");
  scanf("%f", &t);
  printf("The Conversion of %f is %.2f\n", t, c2f(t));
  return 0;
}