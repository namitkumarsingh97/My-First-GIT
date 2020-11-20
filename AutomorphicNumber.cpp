#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,compare,count=0,b;
	printf("Enter a number");
	scanf("%d",&n);
	a=n*n;
	while(n>0)
	{
		n=n/10;
		count++;
	}
	compare=pow(10,count);
	b=a%compare;
	
	if(n==b)
	{
		printf("\nThis is an Automorphic Number\n");
	}
	else
	{
		printf("\nThis is not an Automorphic Number\n");
	}
}

