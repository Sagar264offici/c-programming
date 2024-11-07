#include <stdio.h>

int main() {
    int num = 42;           // Integer variable
    char letter = 'A';      // Character variable
    float decimal = 3.14;   // Floating-point variable
    int arr[10];            // Array of 10 integers

    // Printing the size of each data type
    printf("Size of int data type: %lu bytes\n", sizeof(int));
    printf("Size of char data type: %lu bytes\n", sizeof(char));
    printf("Size of float data type: %lu bytes\n", sizeof(float));

    // Printing the size of each variable
    printf("Size of num (int variable): %lu bytes\n", sizeof(num));
    printf("Size of letter (char variable): %lu bytes\n", sizeof(letter));
    printf("Size of decimal (float variable): %lu bytes\n", sizeof(decimal));

    // Printing the size of the array
    printf("Total size of arr (int array of 10 elements): %lu bytes\n", sizeof(arr));
    printf("Size of one element in arr: %lu bytes\n", sizeof(arr[0]));
    printf("Number of elements in arr: %lu\n", sizeof(arr) / sizeof(arr[0]));

    return 0;
}
