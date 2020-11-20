#include<stdio.h>
#include<math.h>
int main()
{
	int n,s,count=0,q,r,number,sum;
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
	printf("Total Number Of Digits in Square Root: %d",count);
	printf("\n");
	if(count%2==0)
	{
		number=pow(10,count/2);
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
		number=pow(10,(count/2)+1);
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


