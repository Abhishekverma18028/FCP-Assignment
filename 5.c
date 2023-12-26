#include <stdio.h>
#include <string.h>


int main() {char strc[] = "Hello";
    char strd[] = "World";
    if (strcmp(strc, strd) == 0) {
        printf("String comparison using character array: Equal\n");
    } else {
        printf("String comparison using character array: Not Equal\n");
    }
    return 0;
}