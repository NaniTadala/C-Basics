//Write a C Program to calculate the area and perimeter of square when side is given
#include<stdio.h>
void main()
{
	//Variable Declaration
	int s,area,per;
	
	//initilization
	s=4;
	area=s*s;
	per=4*s;
	
	//Output
	printf("area of square with side %d is %d\n",s,area);
	printf("perimeter of square with side %d is %d",s,per);
}
