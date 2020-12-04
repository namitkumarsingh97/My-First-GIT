#include<stdio.h>
int main()
{
	int num1, num2, result;
	printf("Enter 2 Values");
	scanf("%d%d",&num1,&num2);
	result = sum(num1, num2); 			// [Error] 'sum' was not declared in this scope
	printf("Addition of 2 numbers is: ");
	return 0;
}
	int sum(int num1,int num2)
	{
	int num3;
	num3 = num1 + num2;
	return (num3);	
	}

