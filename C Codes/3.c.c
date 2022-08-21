#include<stdio.h>

int main() {
    // delclare variables
    char str[100];
    int i = 0;

    // take input of string
    printf("Enter a string: ");
    gets(str);

    // check each charcater in the string str. change 
    // each lowercase letter to its uppecase equivalent.
    // Make no change for other characters.
    while (str[i] != '\0') {
        // check if character is in lowercase
        // If yes, subtract 32 from its ASCII 
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("The string in uppercase: %s\n", str);

    return 0;
}
