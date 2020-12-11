#include<stdio.h>
int main(){
	printf("Hello world\n");
	int number1, number2, sumOf2Numbers;
	printf("Please ENTER 2 number\n");
	scanf("%d %d",&number1, &number2);
	sumOf2Numbers = number1+number2;
	printf("%d + %d = %d",number1,number2,sumOf2Numbers);
	return 0;
}
