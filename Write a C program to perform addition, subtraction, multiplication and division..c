#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char y;
	float a,b,c;
	printf("Enter the first number\n");
	scanf("%f",&a);
	printf("Enter the second number\n");
	scanf("%f",&b);
	printf("Enter the operation:\n+\n-\n*\n/\n");
	scanf(" %c",&y);
	switch(y)
	{
		case '+':c=a+b;
		printf("Addtion of two number is %f\n",c);
		break;
		case '-': c=a-b;
		printf("Subtraction of two number is %f\n",c);
		break;
		case '*': c=a*b;
		printf("multiplication of two number is %f\n",c);
		break;
		case '/': c=a/b;
		printf("divsion of two number is %f\n",c);
		break;
		default:
		printf("invalid operator");
		break;
	}
        return 0;
    }
