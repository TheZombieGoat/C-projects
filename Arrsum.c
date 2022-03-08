#include <stdio.h>
#include <stdlib.h>

int asum(int *arr, int narr)
{
	if((narr-1) < 1)
		return arr[0];
	return arr[narr-1]+asum(arr,narr-1);
}

int main()
{
	int narr = 0;
	int i = 0;
	printf("\nInput value for number of elements: ");
	scanf("%i", &narr);
	int *p;
	p = (int*)malloc((narr+1)*sizeof(int));
	for (int i = 0; i < narr; i++)
	{
		int input = 0;
		printf("\nType in value of element %i: ", i);
		scanf("%i", &input);
		p[i] = input;
		
	}
	for (int j = 0; j < narr; ++j)
	{
		printf("%i\n", p[j]);
	}
	int s = 0;
	s = asum(p,narr);
	printf("\nSum of Input is: %d\n", s);
	free(p);
}