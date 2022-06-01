#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES 
#include <math.h>

int var_sum(int count, ...) //sums all args after initial arg
{
	va_list args;
	va_start(args,count);
	int i, sum = 0;
	for (i = 0; i < count; i++)
	{
		sum += va_arg(args,int);
	}
	va_end(args);
	return sum;
}

int var_mult(int count, ...) //multiplies all arguments after initial arg
{
	va_list args;
	va_start(args,count);
	int i, prod = 1;
	for (i = 0; i < count; i++)
	{
		prod += va_arg(args,int);
	}
	va_end(args);
	return prod;
}

char *var_conc(int count, ...) //Concatenates characterts
{
	va_list args;
	va_start(args,count);
	char *s = malloc(count);
	for (int i = 0; i < count; i++)
	{	
		s[i] = va_arg(args, int);
	}
	va_end(args);
	return s; //free after using to prevent memory leaks
}

float *multcir_area(int count, ...) //Finds Area of circle
{
	va_list args;
	va_start(args,count);
	float *s = malloc(count);
	for (int i = 0; i < count; i++)
	{	
		s[i] = va_arg(args, int);
		s[i] *= s[i]*(float)M_PI;
	}
	va_end(args);
	return s; //free after using to prevent memory leaks
}
