//To print count of multiples of x in given range
#include <stdio.h>
int main() 
{
	int a,b,x,i,count=0;
	scanf("%d%d%d", &x, &a, &b);
	
	for (i=a;i<=b;i++) {
		if (i%x == 0) {
			count++;
		}
	}
	printf("%d", count);
}
