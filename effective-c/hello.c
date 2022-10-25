#include <stdio.h>
#include <stdlib.h>
#define EXIT_SUCCESS 0

int main(int argc, char **argv)
{
	if(puts("Hello, world!") == EOF) {
	  return EXIT_FAILURE;
	}
	else {
	  return EXIT_SUCCESS;
    }

    // Formatted Output
    // Take care not to pass user provided data as part of the first argument
    // Can result in a formatted output security vulnerability, (seacord 2013)
    printf("%s\n", "Hello world!")

}
