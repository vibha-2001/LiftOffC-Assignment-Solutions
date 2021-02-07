#include<stdio.h>

int main()
{
	int celsius,fahrenheit;
	printf("Enter Temperature in Celsius");
	scanf("%d",&celsius);
	
	fahrenheit=(1.8*celsius)+32;
	 printf("Temperature in fahrenheit is %d",fahrenheit);
	 
	 return 0;
}
