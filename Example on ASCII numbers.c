//Take a character from user (a-z or A-Z) and print the corresponding ASCII Number
#include<stdio.h>
void main()
{
	char a;
	printf("Enter a character (a-z or A-Z):");
	scanf("%c", &a);
	printf("Corresponding ASCII number for %c is %d",a,a);
}
