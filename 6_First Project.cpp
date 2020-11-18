#include<stdio.h>
int main()
{
	int i,j;
	float a[10],temp,sum=0.0;
	printf("Enter height of Players\n");
	for(i=0;i<10;i++)
	scanf("%f",&a[i]);
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=9;i>=0;i--)
	printf(" %.1f",a[i]);
	printf("\n");
	for(i=9;i>=5;i--)
	{sum=sum+a[i];}
	printf("Sum of top Heights: %.1f",sum);
}

