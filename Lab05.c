#include <stdio.h>
int main(int argc, char const *argv[])
{
	float l, b, area, side, perimeter;
	//rectangle
	printf("Enter the value of length of rectangle\n");
	scanf("%f", &l);
	printf("Enter the value of width of ranctangle \n");
	scanf("%f", &b);
	area= l*b;
	perimeter=2*(l + b);
	printf("area = %f\nperimeter = %f\n", area, perimeter);
	// square
	printf("Enter the value of side of square\n");
	scanf("%f", &side);
	area = side*side;
	perimeter = 4*(side);
	printf("the area of square is = %f\nperimeter= %f\n", area, perimeter);
	//circle
	printf("Enter the radius of the circle\n");
	scanf("%f", &l);
	area= 3.14*l*l;
	perimeter= 2*3.14*l;
	printf("area of circle= %f\ncircumfrence= %f", area, perimeter);
	return 0;
}
