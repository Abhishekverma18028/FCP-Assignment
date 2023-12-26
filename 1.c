#include <stdio.h>
#include <string.h>

int main() {
    // Scenario 1: Using string library

    // String comparison
    char stra[] = "Hello";
    char strb[] = "World";
    if (strcmp(stra, strb) == 0) {
        printf("String comparison using library: Equal\n");
    } else {
        printf("String comparison using library: Not Equal\n");
    }
    return 0;
}