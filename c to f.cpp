//WAP to convert celsius to fahrenhit//


#include<stdio.h>
main()
{
	
	float Fahrenhit,Celsius;
	// input from the user //
	printf("enter the value of Celsius:");
	scanf("%f",&Celsius);
	
	// formula to perform operation//
	Fahrenhit=(Celsius*9/5)+32;
	
	// output //
	printf("Fahrenhit%.3f",Fahrenhit);
	return 0;
	
}
