#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int i;

    printf("Enter a string: ");
    gets(str);

    ptr = str;   // pointer points to start of string

    for (i = 0; ptr[i] != '\0'; i++);  // loop until null character

    printf("Length of the string = %d\n", i);

    return 0;
}
