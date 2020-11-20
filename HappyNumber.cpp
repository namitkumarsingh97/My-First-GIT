#include<stdio.h>
int main()
{
	int n,a,d,sum=0;
	printf("Enter a number");
	scanf("%d",&n);
	a=n;
	
	while(n>0)
	{
	d=n%10;
	sum=sum+d;
	n=n/10;
	}
	printf("Sum of number: %d",sum);
	
	if(a%sum==0)
	{
		printf("\nThis is a Happy Number\n");
	}
	else
	{
		printf("\nThis is not a Happy Number\n");
	}
}
