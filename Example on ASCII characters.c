//Take a number from user (from 65-90 or 97-122) and print coressponding ASCII character
#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number (65-90 or 97-122):");
	scanf("%d", &a);
	printf("Corresponding ASCII character for %d is %c",a,a);
}
