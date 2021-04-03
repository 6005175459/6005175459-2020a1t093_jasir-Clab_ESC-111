#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num;
	printf("Enter the integer \n");
	scanf("%d", &num);
	if (num % 2 == 0)
	
     printf("The integer is even\n", num);
	
    else
    	printf("The integer is odd\n", num);
	
	return 0;
}
