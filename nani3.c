//C Program to print grade according to marks
#include <stdio.h>
void main()
{
	int a;
	printf("Enter marks : ");
	scanf("%d",&a);
	if(a>=80 && a<=100)
	{
		printf("Garde : A");
	}
	else if(a>=70 && a<=100)
	{
		printf("Grade : B");
	}
	else if(a>=60 && a<=100)
	{
		printf("Grade : C");
	}
	else if(a>=50 && a<=100)
	{
		printf("Grade : D");
	}
	else if(a<50)
	{
		printf("Fail");
	}
	else
	{
		printf("Invalid Marks");
	}
}
