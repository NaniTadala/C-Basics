//Sum of First n natural numbers
#include<stdio.h>
void main ()
{
	//Varible Declaration
	int n, m, s, s_2;
	
	//Initialization
	n=5;
	m=10;
	
	//Calculation
	s= n*(n+1)/2;
	s_2= m*(m+1)/2;
	
	//Output
	printf("Sum of first %d natural numbers is %d\n",n, s);
	printf("Sum of first %d natural numbers is %d",m, s_2);
}
