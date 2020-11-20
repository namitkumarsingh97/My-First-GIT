#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,c,compare,count=0,b;
	printf("Enter a number");
	scanf("%d",&n);
	c=n;
	a=n*n;
	while(n>0)
	{
		n=n/10;
		count++;
	}
	compare=pow(10,count);
	b=a%compare;
	
	if(c==b)
	{
		printf("\nThis is an Automorphic Number\n");
	}
	else
	{
		printf("\nThis is not an Automorphic Number\n");
	}
}

