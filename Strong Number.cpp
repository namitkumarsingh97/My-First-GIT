#include<stdio.h>
int fact(int);
int main()
{
	int a,num1,d,fs,sum=0;
	printf("Enter a number");
	scanf("%d",&num1);
	num1=a;
	while(num1>0)
	{
	d=num1%10;
	fs=fact(d);
	sum=sum+fs;
	num1=num1/10;
	}
	
	if(sum==a)
	{
		printf("This is a Strong Number");
	}
	else
	{
		printf("This is not a Strong Number");
	}
}	
	int fact(int d)
	{
		int mul=1,i;
		for(i=d;i>=1;i--)
		mul=mul*i;
		return(mul);
	}
