#include <stdio.h>


int main() {
int n;

int not_prime =0;
printf("Enter the no. to check it's prime or not\t");
scanf("%d",&n);
if(n==0|| n==1){
    not_prime=1;

}else {
for (int i=2; i<n; i++)
{
    if(n%i==0&&n!=2){
        not_prime =1;
        break;
    }
}
if(not_prime){
    printf("%d is not prime \n", n);

}
else {
    printf("It's a prime no.\n");
}
}
return 0;
}