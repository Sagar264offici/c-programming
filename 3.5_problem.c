#include<stdio.h>
// This program uses ASCII Value in it.
/*         The ASCII value is a numerical representation of a character in the ASCII
             (American Standard Code for Information Interchange) system. ASCII assigns a unique integer 
             (from 0 to 127) to each character, allowing computers to store and manipulate text.

*/
int main(){
    char ch;
    printf("Enter the Character\n");
    scanf("%c", &ch);
    printf("The ASCII value of character is %d\n", ch);
    if (ch>97 && ch<=122){
        printf("Therefore This character is in lowercase\n");
    }
    else if(ch>65 && ch<=90){
        printf("Therefore The character is in upperecase\n");
    }
    else {
        printf("Invalid character\n");
    }
    return 0;
}
/*
65-90: Uppercase letters (A to Z).
97-122: Lowercase letters (a to z).
*/