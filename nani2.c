//C Program to print largest number from 4 no's
#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter 4 Numbers : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>=b && a>=c && a>=d)
	{
		printf("%d is the largest number than %d, %d and %d",a,b,c,d);
	}
	else if(b>a && b>c && b>d)
	{
		printf("%d is the largest number than %d, %d and %d",b,a,c,d);
	}
	else if(c>a && c>b && c>d)
	{
		printf("%d is the largest number than %d, %d and %d",c,a,b,d);
	}
	else
	{
		printf("%d is the largest number than %d, %d and %d",d,a,b,c);
	}
}
