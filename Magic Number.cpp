#include<stdio.h>
int main()
{
	int n,a,d,sum=0;
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		d=n%10;
		sum=sum+d;
		n=n/10;
	}
	if(sum==6)
	printf("Magic Number: %d",a);
	else
	printf("Not Magic Number");
}
