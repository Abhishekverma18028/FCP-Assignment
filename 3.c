#include <stdio.h>
#include <string.h>


int main() {
    // Scenario 1: Using string library

    // String comparison
    char stra[] = "Hello";
    char strb[] = "World";
    // String reversal
    char reverseStr[20];
    strcpy(reverseStr, stra);
    strrev(reverseStr);
    printf("String reversal using library: %s\n", reverseStr);
    return 0;}