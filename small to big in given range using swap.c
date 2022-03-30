//To print numbers in given range only smallest to biggest no matter how is input using swap
#include <stdio.h>
int main() 
{
	int n,a,b,i;
	scanf("%d%d", &a, &b);
	if (a>b) {
		int t = a;
		a = b;
		b = t;
		}
		for (i=a;i<=b;i++)
		{
			printf("%d ",i);
		}
	
}
