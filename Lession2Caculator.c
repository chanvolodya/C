#include<stdio.h>
int main(){
	float number1;
	float number2;
	float result;
	char option;
	printf("*****Caculator*****\n");
	printf("Please ENTER 2 Numbers\n");
	scanf("%f %f",&number1,&number2 );
	printf("Please option: +,-,*,/\n");
	scanf("%s",&option);
	switch (option)
	{
	case '+':
		result =  number1+number2;
		break;
	case '-':
		result = number1 - number2;
		break;
	case '*':
		result = number1*number2;
		break;
	case '/':
		result = number1/number2;
		break;
	}
	printf("Result = %.2f",result);
	return 0;

}

