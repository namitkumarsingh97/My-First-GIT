#include<stdio.h>
#include<math.h>
float sum(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);
float bmi(float,float);
int main()
{
	float num1, num2, result, result1, result2, result3, result4;
	char operation;
	printf("Enter an operation (+, -, *, /, B): ");
    scanf("%c", &operation);
	printf("Enter 2 Values: ");
	scanf("%f %f",&num1,&num2);
	switch (operation)
	{
		case '+':
		result = sum(num1, num2);
		printf("\nAddition of 2 numbers is: %.2f",result);
		break;
		case '-':
		result1 = sub(num1, num2);
		printf("\nSubtraction of 2 numbers is: %.2f",result1);
		break;
		case '*':
		result2 = mul(num1, num2);
		printf("\nMultiplication of 2 numbers is: %.2f",result2);
		break;
		case '/':
		result3 = div(num1, num2);
		printf("\nDivision of 2 numbers is: %.2f",result3);
		break;
		case 'B':
		printf("\nEnter num1 as your mass in (kg) and num2 as your height in (cm)\n");	
		result4 = bmi(num1, num2);
		printf("\nYour BMI is: %.2f ",result4);
		printf("kg/m2\n");
		if(16.0<=result4<=18.5)
		{
			printf("UnderWeight");
		}
		else if(18.5<result4<=25.0)
		{
			printf("Normal");
		}
		else if(25.0<result4<=40.0)
		{
			printf("OverWeight");
		}
		printf("\nUnderWeight: 16.0 - 18.5");
		printf("\nNormal: 18.5 - 25.0");
		printf("\nOverWeight: 25.0 - 40.0");
		break;
	}
	return 0;
}
	float sum(float num1,float num2)		//Addition Function
	{
	float num3;
	num3 = num1 + num2;
	return (num3);	
	}
	
	float sub(float num1,float num2)	//Subtraction Function
	{
	float num4;
	num4 = num1 - num2;
	return (num4);	
	}
	
	float mul(float num1,float num2)	//Multiplication Function
	{
	float num5;
	num5 = num1 * num2;
	return (num5);	
	}
	
	float div(float num1,float num2)	//Division Function
	{
	float num6;
	num6 = num1 / num2;
	return (num6);	
	}
	
	float bmi(float num1,float num2)	//BMI Function
	{
	float num7;
	num7 = num1 / pow(num2,2);
	num7 = num7 * 10000;
	return (num7);	
	}
