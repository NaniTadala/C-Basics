//To print sum of all numbers in a given range
#include <stdio.h>
int main() 
{
	int a,b,i,sum=0;
	scanf("%d%d", &a, &b);
	
	for (i=a;i<=b;i++) {
		sum = sum+i;
	}
	printf("%d", sum);
}
