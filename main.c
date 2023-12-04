#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *inputString;
    int maxLength = 100; //Maxlength the string..
    inputString = (char *)malloc(maxLength * sizeof(char));
    if (inputString == NULL) {
        fprintf(stderr,"Memory allocation failed\n");
        return 1;
    }

    printf("What is your name?\n");
    // Read the string using fgets to safely handle spaces and limit input size
    if (fgets(inputString, maxLength, stdin) != NULL) {
        printf("You entered: %s\n", inputString);

    } else {
        printf("Error reading input\n");
    }
    
    free(inputString);
    
    return 0;
}
