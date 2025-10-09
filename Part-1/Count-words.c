/****************************************************************************/
/*           PROGRAM TO  FIND NUMBER OF WORDS IN A GIVEN SENTENCE           */
/****************************************************************************/
#include <stdio.h>
#include <conio.h>
#include <string.h> // For strlen()
#include <ctype.h> // For isspace()

// "char *s" is the standard way to pass strings to functions in C
void trim(char *s) {
    // Trim leading whitespace
    int i = 0;
    while (isspace((unsigned char)s[i])) {
        i++;
    }

    // Shift characters to remove leading whitespace
    if (i > 0) {
        int j = 0;
        while (s[j++] = s[i++]);
    }

    // Trim trailing whitespace
    int len = strlen(s);
    while (len > 0 && isspace((unsigned char)s[len - 1])) {
        len--;
    }
    s[len] = '\0'; // Null-terminate the string at the new end
}

void main() {
    int i, words = 0;
    char sentence[100];
    clrscr();
    input:printf("Enter the sentence :\n");
    // Read a line of text from a specified input stream
    fgets(sentence, sizeof(sentence), stdin);
    // Trim leading and trailing whitespace characters
    trim(sentence);
    int length = strlen(sentence);
    if(length < 1) {
        printf("No sentence provided.Try again—\n\n");
        goto input;
    } else {
        for(i=0; i<length; i++) {
            if(sentence[i]==' ') {
                if(sentence[i+1] == ' ') continue;
                words += 1;
            }
        }
        if(sentence[length-1] != ' ') words++;
        printf("\nThe number of words : %d", words);
    }
    getch();
}