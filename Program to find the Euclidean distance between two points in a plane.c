#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	float x1,x2,y1,y2,distance,x,y;
	printf("Enter the coordinate of first point\n");
	scanf("%f%f", &x1,&y1);
	printf("Enter the coordinate second point\n");
	scanf("%f%f", &x2,&y2);
	x=(x2 - x1);
	y=(y2 - y1);
	distance=sqrt(x*x + y*y);
	printf("distance between points= %f\n", distance);
	return 0;
}
