/*************************************************************************/
/*                PROGRAM TO FIND NUMBER OF VOWELS IN  STRINGS           */
/*************************************************************************/
#include <stdio.h>
#include <conio.h>
#include <string.h> // For strlen()
#include <ctype.h> // For isspace()

// "char *s" is the standard way to pass strings to functions in C
void trim (char *s) {
    // Trim leading whitespace
    int i = 0;
    while(isspace((unsigned char)s[i])) {
        i++;
    }

    // Shift characters to remove leading whitespace
    if(i>0) {
        int j = 0;
        // concise way to copy a null-terminated string s
        while(s[j++] = s[i++]);
    }

    // Trim trailing whitespace
    int len = strlen(s);
    while(len > 0 && isspace((unsigned char)s[len-1])) {
        len--;
    }
    s[len] = '\0'; // Null-terminate the string at the new end

}

void main()
{
    int i, vowels = 0;
    char string[100];
    clrscr();
    input:printf("Enter strings:\n");
    // Read a line of text from a specified input stream
    fgets(string, sizeof(string), stdin);
    // Trim leading and trailing whitespace characters
    trim(string);
    int length = strlen(string);
    if(length < 1) {
        printf("No String Provided. Try Again—\n\n");
        goto input;
    } else {
        for(i=0; i<length; i++) {
            switch (string[i]) {
            case 'a':
                vowels++;
                break;
            case 'e':
                vowels++;
                break;
            case 'i':
                vowels++;
                break;
            case 'o':
                vowels++;
                break;
            case 'u':
                vowels++;
                break;
            default:
                break;
            }
        }
        printf("\nThe number of vowels: %d", vowels);
    }
    getch();
}