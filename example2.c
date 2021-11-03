//Write a C Program that converts minutes into hours and minutes
#include<stdio.h>
void main()
{
	//variable declaration and initilization
	int t=550,h=t/60,m=t%60;
	
	//output
	printf("%d hour(s) %d minute(s)",h,m);
}
