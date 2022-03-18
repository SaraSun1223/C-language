#include<stdio.h>

int main(){
	int number=0;
	printf("Please input an intenger:");
	scanf("%d",&number);
	
	if(number>=100&&number<1000)
	{
		int a,b,c;
		int temp;
		a=number/100;
		b=(number-100*a)/10;
		c=(number-100*a-10*b);
		temp=100*c+10*b+a;
		printf("%d",temp);
	}
	else
	{
		printf("Wrong number!");	
	}
	
	return 0;
	
} 
