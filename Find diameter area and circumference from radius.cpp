#include<stdio.h>

int main()
{
	int radius,diameter;
	float pi=3.14,circumference;
	printf("Enter radius of the circle");
	scanf("%d",&radius);
	
	diameter=2*radius;
	printf("Diameter of the circle is %d\n", diameter);
	
	circumference=pi*diameter;
	printf("circumference of the circle is %f", circumference);
	
	area=radius*radius*pi;
	printf("area of the circle is %d\n", area);
	
	return 0;
}
