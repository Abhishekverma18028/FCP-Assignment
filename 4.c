#include <stdio.h>
#include <string.h>


int main() {
    // Scenario 1: Using string library

    // String comparison
    char stra[] = "Hello";
    char strb[] = "World";
    if (strlen(stra) == strlen(strb)) {
        printf("Length comparison using library: Equal\n");
    } else {
        printf("Length comparison using library: Not Equal\n");
    }
    return 0;
}