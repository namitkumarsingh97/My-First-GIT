#include<stdio.h>
int prime(int);
int main()
{
	int n,Pr;
	printf("Enter a value to check: ");
	scanf("%d",&n);
	Pr=prime(n);
	if(Pr==0)
	{
		printf("This number is a Prime Number");
	}
	else
	{
		printf("This number is a Composite Number");
	}
	return 0;
}
	int prime(int n)
{
	int i,check=0;
	for(i=2;i<=n/2;i++)
	{
	if(n%i==0)
	{
		check=1;
		break;
	}
	}
	return(check);
}

