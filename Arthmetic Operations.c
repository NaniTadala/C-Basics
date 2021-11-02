//All Arthmetic Operations
#include<stdio.h>
void main()
{
	//Variable declaration
	int a, b, sum, difference, product, remainder;
	float quotient;
	
	//initialization
	a=11;
	b=2;
	
	sum = a+b;
	difference = a-b;
	product = a*b;
	quotient = a/b;
	remainder = a%b;
	
	//Output
	printf("Sum of %d and %d is %d:\n", a, b, sum);
	printf("Difference of %d and %d is %d:\n", a, b, difference);
	printf("Product of %d and %d is %d:\n", a, b, product);
	printf("Quotient of %d and %d is %f:\n", a, b, quotient);
	printf("Remainder of %d and %d is %d:\n", a, b, remainder);
}
