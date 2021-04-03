
#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, temp=0;
	printf("enter a number:\n");
	scanf("%d", &n);
	for(i=2; i<=sqrt(n); i++)
	{
		if(n%2==0)
		{
			temp=0;
			break;
		}
	}
	if(n<=1)
		temp=0;
	if(temp==1)
	{
		printf("%d is a prime number", n);
	}
	else
	{
		printf("%d is not a prime number", n);

	}
	return 0;

}