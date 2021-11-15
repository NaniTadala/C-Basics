//Decode ASCII charcters
//Take input 4 2 21 and get output as cat 
#include<stdio.h>
void main()
{
	int a, b, c;
	printf("Enter three numbers");
	scanf("%d%d%d", &a, &b, &c);
	printf("Output is %c%c%c",a+95,b+95,c+95);
}
