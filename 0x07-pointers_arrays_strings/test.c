#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "This is a sample string";
    char charset[] = "aeiou"; // Characters to search for

    char *result = strpbrk(str, charset);

    if (result != NULL) {
        printf("First occurrence of any character from charset in str: %s\n", result);
    } else {
        printf("No characters from charset found in str.\n");
    }

    return 0;
}

