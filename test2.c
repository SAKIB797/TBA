#include <stdio.h>
#include <string.h>

int main() {
    char s1[100];
    char s2[100];
    char s3[200]; // Initialize s3 to hold the concatenated string

    printf("Enter the first string: ");
    scanf("%99[^\n]", s1); // Limit input to 99 characters to avoid buffer overflow

    // Clear the input buffer
    while (getchar() != '\n');

    printf("Enter the second string: ");
    scanf("%99[^\n]", s2); // Limit input to 99 characters to avoid buffer overflow

    // Clear the input buffer
    while (getchar() != '\n');

    strcpy(s3, s1); // Copy the first string to s3
    strcat(s3, " "); // Concatenate a space character
    strcat(s3, s2); // Concatenate the second string to s3

    printf("Concatenated string: %s\n", s3);

    return 0;
}
