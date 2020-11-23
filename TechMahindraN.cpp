#include<stdio.h>
int main()
{
	int n,a[n],b[n-1],i,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n-1;i++)
	b[i]=a[i]-a[i+1];
	
	for(i=0;i<n-1;i++)
	if(b[i]<0)
	{
		b[i]=b[i]*(-1);
		printf(" %d",b[i]);
	}
	else
	{
		printf(" %d",b[i]);
	}
		
	for(i=0;i<n-1;i++)
	sum=sum+b[i];
	printf("\n%d",sum);
	
}

