#include <stdio.h>
#include <string.h>


int main() {
    // Scenario 1: Using string library

    // String comparison
    char stra[] = "Hello";
    char strb[] = "World";
    char concatStr[20];
    strcpy(concatStr, stra);
    strcat(concatStr, strb);
    printf("String concatenation using library: %s\n", concatStr);
    return 0;
}