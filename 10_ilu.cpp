#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1||j==3||i==5)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1&&j==2||i==1&&j==4||i==2&&j==1||i==2&&j==3||i==2&&j==5||i==3&&j==1||i==3&&j==5||i==4&&j==1||i==4&&j==5||i==5&&j==2||i==5&&j==4||i==6&&j==3)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1||i==5||j==5)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
