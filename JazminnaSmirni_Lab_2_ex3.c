/*
 * JazminnaSmirni_Lab_2_ex3.c
 *
 *  Created on: Feb 7, 2024
 *      Author: jsmirni
 */

#include <stdio.h>
#include <math.h>
#define PI 3.141592653589

int
main(void)
{
	setvbuf(stdout, NULL,_IONBF, 0);
	double result;
	int n;

	printf("Enter N value: ");
	scanf("%d", &n);

	result = ((pow(n,n)) * exp(-n)) * sqrt(((2*n)+(1.0/3.0)) * PI);
	printf("The result is %.5f.", result);

	return 0;
}
