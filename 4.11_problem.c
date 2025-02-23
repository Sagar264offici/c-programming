#include <stdio.h>

int main() {
    int n, i = 2, not_prime = 0; // ✅ Declare all variables properly

    printf("Enter the number to check if it's prime or not: ");
    scanf("%d", &n);

    if (n == 0 || n == 1) { // ✅ Correctly checks 0 and 1
        not_prime = 1; 
    } else {
        while (i < n) { // ✅ `i` is initialized before use
            if (n % i == 0) { // ✅ Proper prime check
                not_prime = 1;
                break;
            }
            i++; // ✅ Proper increment
        }
    }

    if (not_prime) {
        printf("%d is not a prime number.\n", n);
    } else {
        printf("%d is a prime number.\n", n);
    }

    return 0;
}
