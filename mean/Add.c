#include<stdio.h>
#include<stdlib.h>
#include<p18F4550.h>
void main(void)
{
	int i,sum;
	int number[]={1,3,5,7,9};
	sum=0;
	for(i=0;i<=4;i++)
	{
		sum=sum+number[i];
	}
	TRISD=0;
	PORTD=sum;
		
}