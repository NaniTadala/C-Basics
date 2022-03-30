//Print mutiple of x in range a,b
#include <stdio.h>
int main() {
	int x,a,b,i;
	scanf("%d%d%d", &x,&a,&b);
	for (i=a;i<=b;i++) {
		if(i % x !=0) continue;
		printf("%d\n",i);
	}
}
