#include<stdio.h>
int main()
{
	int a[5],b[4],i,sum=0;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<4;i++)
	b[i]=a[i]-a[i+1];
	
	for(i=0;i<4;i++)
	if(b[i]<0)
	{
		b[i]=b[i]*(-1);
		printf(" %d",b[i]);
	}
	else
	{
		printf(" %d",b[i]);
	}
		
	for(i=0;i<4;i++)
	sum=sum+b[i];
	printf("\n%d",sum);
	
}
