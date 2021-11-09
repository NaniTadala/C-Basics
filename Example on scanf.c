//Take four numbers from user and print their product
#include<stdio.h>
void main()
{
	int a=1, b=2, c=3,d=4;
	printf("Enter four numbers");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("Product of %d, %d, %d and %d is %d",a,b,c,d, a*b*c*d);
}
