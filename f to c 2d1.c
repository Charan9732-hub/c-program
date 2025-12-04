//conversion of fahrenheit to celsius//
#include <stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("enter the temp in fah");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)/1.8;
	printf("temperature in celsius:%.2f",celsius);
	
}
