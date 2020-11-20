#include<stdio.h>
#include<math.h>
int main()
{
	int n,s,count,d,q,r,number,sum;
	printf("Enter any number\n");
	scanf("%d",&n);
	s=(n*n);
	printf("Square Root: %d",s);
	printf("\n");
	while(s>0)
	{
		s=s/10;
		count++;
	}
	printf("Total Number Of Digits in Square Root: %d",d=count-1);
	printf("\n");
	if(d%2==0)
	{
		number=pow(10,d/2);
		printf("number: %d",number);
		printf("\n");
		q=s/number;
		r=s%number;
		printf("Quotient: %d",q);
		printf("\n");
		printf("Remainder: %d",r);
		printf("\n");
		sum=q+r;
		printf("Sum: %d",sum);
	}
	else
	{
		number=pow(10,(d/2)+1);
		printf("number: %d",number);
		printf("\n");
		q=s/number;
		r=s%number;
		printf("Quotient: %d",q);
		printf("\n");
		printf("Remainder: %d",r);
		printf("\n");
		sum=q+r;
		printf("Sum: %d",sum);
	}
	printf("\n");
	if(sum==n)
	{
		printf("This Number is a Kaprekar number");
	}
	else
	{
		printf("This Number is not a Kaprekar number");
	}
}


