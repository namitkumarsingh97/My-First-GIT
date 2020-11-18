#include<stdio.h>
int main()
{
	int d,n,sum=0;
	printf("Enter any number");
	scanf("%d",&n);
	int a=n;
	while(n>0)
	{
	d=n%10;
	sum=(sum*10)+d;
	n=n/10;
	}
	if(n==sum)
	printf("Palendrome Number");
	else
	printf("Not Palendrome Number");	
}

