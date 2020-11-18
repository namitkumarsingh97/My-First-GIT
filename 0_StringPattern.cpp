#include<stdio.h>
int main()
{
	char k='A';
	int i,j;
	
	for(i=1;i<=5;i++)
	{	
		for(j=1;j<=5;j++)
			{
				if(i==j||i>j)
					{
						printf("%c",k);
						k++;
					}
				else
					{
						printf(" ");
					}
			}
				printf("\n");
	}
}

