#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	printf("Enter elements in array\n");
	for(i=0;i<=9;i++)
	{scanf("%d",&a[i]);}
	
	for(i=0;i<=6;i++)
	{
		printf("Quadruple 1: %d\n",a[i]);
		printf("Quadruple 2: %d\n",a[i+1]);
		printf("Quadruple 3: %d\n",a[i+2]);
		printf("Quadruple 4: %d\n",a[i+3]);
	sum=sum+a[i]+a[i+1]+a[i+2]+a[i+3];
	printf("Sum of Qudruple: %d\n",sum);
	sum=0;
	}
	return 0;
}
