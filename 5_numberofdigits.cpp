#include<stdio.h>
int main()
{
	int n,count;
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		count++;
	}
	printf("Total Number Of Digits: %d",count);
}
