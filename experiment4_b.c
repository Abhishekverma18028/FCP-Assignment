//program to calculate the length of string using library function
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] ;
    printf("enter your string\n");
    gets(str);
	
	int string_length= strlen(str) ;

	printf(" The length of the string is %d\n", string_length);

	return 0;
}
