#include <stdio.h>
#include <math.h>
int main()
{
	printf("Input known values and type 0 for unknown value.\n");
	double o, a, h = 0;
	printf("\n Opposite: ");
	scanf("%lf", &o);
	printf("\n Adjacent: ");
	scanf("%lf", &a);
	printf("\n Hypotenuse: ");
	scanf("%lf", &h);

	if(h == 0)
	{
		double sum = a*a + o*o;
		h = sqrt(sum);
	}

	if(o == 0)
	{
		double dif = h*h - a*a;
		o = sqrt(dif);
	}

	if(a == 0)
	{
		double dif2 = h*h - o*o;
		a = sqrt(dif2);
	}
	
	if(h < a || h < o)
	{
		printf("\n Error. These are not pythogorean values.");
	}
		else
		{

			printf("\n The Hypotenuse is: %lf.\n The Opposite is: %lf.\n The Adjacent is: %lf.", h,o,a);
		}
	
	return 0;
}