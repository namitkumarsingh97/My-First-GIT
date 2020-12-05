#include<stdio.h>
float sum(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);
int main()
{
	float num1, num2, result, result1, result2, result3;
	printf("Enter 2 Values\n");
	scanf("%f %f",&num1,&num2);
	result = sum(num1, num2);
	result1 = sub(num1, num2);
	result2 = mul(num1, num2);
	result3 = div(num1, num2); 			
	printf("\nAddition of 2 numbers is: %.2f",result);
	printf("\nSubtraction of 2 numbers is: %.2f",result1);
	printf("\nMultiplication of 2 numbers is: %.2f",result2);
	printf("\nDivision of 2 numbers is: %.2f",result3);
	return 0;
}
	float sum(float num1,float num2)
	{
	float num3;
	num3 = num1 + num2;
	return (num3);	
	}
	
	float sub(float num1,float num2)
	{
	float num4;
	num4 = num1 - num2;
	if (num4<0)
	num4 = num4 * (-1);
	return (num4);	
	}
	
	float mul(float num1,float num2)
	{
	float num5;
	num5 = num1 * num2;
	return (num5);	
	}
	
	float div(float num1,float num2)
	{
	float num6;
	num6 = num1 / num2;
	return (num6);	
	}
