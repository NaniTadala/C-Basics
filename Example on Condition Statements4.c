#include<stdio.h>
void main()
{
	int a;
	printf("enter a number to check wheather it is positive or negetive");
	scanf("%d",&a);
	if(a>0)
	{ 
	    printf("%d is positive",a);
	}
	else if(a<0)
	{
		printf("%d is negetive",a);
	}
	else 
	{ 
	  printf("%d is zero",a);
	}
	    
}
