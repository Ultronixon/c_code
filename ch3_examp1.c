#include <stdio.h>
int main(void)
{
	float weight;
	float value;
	
	printf ("Are you worth you weight to rhodium?\n");
	printf ("Enter your weight in pounds: \n");
	scanf ("%f", &weight);
	
	value=100*weight*14.5833;
	printf("value=%f", value);
	
	return 0;
 } 
