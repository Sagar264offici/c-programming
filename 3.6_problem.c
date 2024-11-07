#include <stdio.h>

int main()
{
    int a = 4, b = 2, c = 6, d = 32;
    if (a > b && b > c && a > d)
    {
        printf("The greatest of all is %d\n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The greatest of all is %d\n", b);
    }
    else if (c > b && b > c && c > d)
    {
        printf("The greatest of all is %d\n", c);
    }
    else if (d > b && d > c && d > b)
    {
        printf("The greatest of all is %d\n", d);
    }
    return 0;
}