#include<stdio.h>
int main()
{
	int d,n,sum=0;
	printf("Enter any number");
	scanf("%d",&n);
	while(n>0)
	{
	d=n%10;
	sum=sum+(d*d*d);
	n=n/10;
	}
	printf("%d",sum);	
}
