#include <stdio.h>

int main() {
    // show output to console
    printf("Hello ");
    printf("%s%s", "World", "\n");

    /* Read input form console
     * The first parameter is how to convert the input
     * The following parameters are the variables(addresses) where to store the value read.
     * Important to remember:
     *      Returns the number of items it reads
     *      If you are reading a primitive value, the store variable must be preceded by &
     *      If you are reading a string, don't use &
     */
    int number = 0;
    scanf_s("%d %s", &number);
    printf("\n%d", number);

    return 0;
}