#include<stdio.h>
int main()
{
	int a[5],i,b,sum=0;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<4;i++)
	b=a[i]-a[i+1];
	
	if(b<0)
	{
		b=b*(-1);
		for(i=0;i<4;i++)
		printf(" %d",b);
	}
	else
	{
		for(i=0;i<4;i++)
		printf(" %d",b);
	}
	
	for(i=0;i<4;i++)
	sum=sum+b;
	printf("\n%d",sum);
	
}
