//Example for checking given number is divisible by both 3 and 7
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	if(a%3 ==0)
	if(a%7 ==0)
	{ 
	    printf("%d is divisible by 3 and 7",a);
	}
	else
	{
		printf("%d is not divisible by 3 and 7",a);
	}
}
