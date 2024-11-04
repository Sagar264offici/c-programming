#include <stdio.h>

int main()
{
    int a, b;
    char operator;

    printf("Enter the 1st number:\n");
    scanf("%d", &a);
    printf("Enter the 2nd number:\n");
    scanf("%d", &b);

    printf("Choose the type of calculation you want (+, -, *, /):\n");
    scanf(" %c", &operator);

    if (operator== '+')
    {
        printf("%d + %d = %d\n", a, b, a + b);
    }
    else if (operator== '-')
    {
        printf("%d - %d = %d\n", a, b, a - b);
    }
    else if (operator== '*')
    {
        printf("%d * %d = %d\n", a, b, a * b);
    }
    else if (operator== '/')
    {
        if (b != 0)
        {
            printf("%d / %d = %d\n", a, b, a / b);
        }
        else
        {
            printf("Error! Division by zero is not allowed.\n");
        }
    }
    else
    {
        printf("Error! Invalid operator.\n");
    }

    return 0;
}
