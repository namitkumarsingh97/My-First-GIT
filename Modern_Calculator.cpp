#include<stdio.h>
#include<math.h>
float sum(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);
float bmi(float, float);
float bmr(float, float, float);
float bmrf(float, float, float);
int main()
{
	float num1, num2, num3, result, result1, result2, result3, result4, result5, result6;
	char operation;
	printf("For Addition +\n");
	printf("For Subtraction -\n");
	printf("For Multiplication *\n");
	printf("For Division /\n");
	printf("For BMI B\n");
	printf("For BMR for Men b\n");
	printf("For BMR for Women b-\n");
	printf("Enter an operation (+, -, *, /, B, b, b-): ");
    scanf("%c", &operation);
    printf("Incase of BMI: Enter num1 as your mass in (kg) and num2 as your height in (cm)\n");
    printf("Incase of BMR: Enter weight in (kg) height in (cm)\n");
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
		result4 = bmi(num1, num2);
		printf("\nYour BMI is: %.2f ",result4);
		printf("kg/m2\n");
		printf("\nUnderWeight: 16.0 - 18.5");
		printf("\nNormal: 18.5 - 25.0");
		printf("\nOverWeight: 25.0 - 40.0");
		break;
		case 'b':
		printf("Age in (years): ");	
	    scanf("%f",&num3);
		result5 = bmr(num1, num2, num3);
		printf("\nYour BMR is: %.2f ",result5);
		printf("Kcal/Day");
		break;
		case 'b-':
		printf("Age in (years): ");	
	    scanf("%f",&num3);
		result6 = bmrf(num1, num2, num3);
		printf("\nYour BMR is: %.2f ",result6);
		printf("Kcal/Day");
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
	
	float bmr(float num1,float num2, float num3)	//BMR Function For Man
	{
	float num8;
	num8 = 66.47+(13.75*num1)+(5.003*num2)-(6.755*num3);
	return (num8);	
	}
	
	float bmrf(float num1,float num2, float num3)	//BMR Function For Woman
	{
	float num9;
	num9 = 655.1+(9.563*num1)+(1.85*num2)-(4.676*num3);
	return (num9);	
	}
