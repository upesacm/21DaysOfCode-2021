//WAP to convert temperature into fahrenheit and kelvin//

#include<stdio.h>


void main()
{
	 float celsius, fahr, kelvin;
	 printf("Enter temperature in celsius: ");
	 scanf("%f", &celsius);
	 fahr = 1.8 * celsius + 32.0;
	 kelvin = 273.15 + celsius;
	 printf("%0.2f Celsius = %0.2f Fahrenheit\n", celsius, fahr);
	 printf("%0.2f Celsius = %0.2f Kelvin\n",celsius, kelvin);
	 
	 
}
