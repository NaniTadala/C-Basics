#include <math.h>
int main() {
	int a,b,x,y;
	scanf("%d%d",&x,&y);
	a = sqrt(x); //for square root of number 
	b = pow(x,y); //for x to the power of y
	printf("sqaure root of %d is %d \n",x,a);
	printf("%d power of %d is %d \n",x,y,b);
	
	int n = 10, m = 20;
	int o = n-m;
	printf("absolute number %d \n", abs(o)); //printd positive value if negative
	
	//ceil(n)
	//rounds up the value of the given decimal to nearest integer
	float q = 10.21;
	int w = ceil(q);
	printf("ceil : %d", w);
}
