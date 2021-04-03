#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num1, num2, num3;
	printf("Enter the values of num1, num2 num3\n");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("num1 = %d\t num2 = %d\t num3 = %d\n",num1, num2, num3);
	if (num1 > num2)
	{
		if (num3 < num1)
		{
			printf("num1 is greatest amoung three\n");
		}
		else
		{
			printf("num3 is the greatest amoung three\n");
		}
	}
	else if (num2 > num3)

		printf("num2 is greatest amoung three\n");
		else
			printf("num3 is greatest amoung three\n");

	return 0;
}
