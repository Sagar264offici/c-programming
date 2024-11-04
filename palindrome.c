#include <stdio.h>

int isPalindrome(char str[]) {
    int left = 0;
    int right = 0;

    // Calculate the length of the string manually
    while (str[right] != '\0') {
        right++;
    }
    right--;  // Set to the last valid index

    // Compare characters from both ends
    while (left < right) {
        if (str[left] != str[right]) {
            return 0;  // Not a palindrome
        }
        left++;
        right--;
    }
    return 1;  // It is a palindrome
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
