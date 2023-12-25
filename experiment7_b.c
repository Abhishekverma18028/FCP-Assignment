//program to read data from a file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// Driver code
int main()
{
    FILE* ptr;
    char ch;
    ptr = fopen("aakash.txt", "r");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
    printf("content of this file are \n");
 
    while (!feof(ptr)) {
        ch = fgetc(ptr);
        printf("%c", ch);
    }
    fclose(ptr);
    return 0;
}