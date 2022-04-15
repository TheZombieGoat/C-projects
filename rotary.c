#include <stdio.h>
#include <stdlib.h>

void rotate(int arr[], int narr, int k)
{	
	if(k > narr)
		k = k % narr;
	int last = narr - 1 - k;
	int *p = (int*)malloc(sizeof(int)*(k+1));
	for(int i = 0; i < k; i++){
		p[i] = arr[last+i+1];
	}
	for(int i = last; i >= 0; i--){
		arr[i+k] = arr[i];
	}
	for (int i = 0; i < k; i++)
	{
		arr[i] = p[i];
	}
	free(p);
}

int main()
{
	int arr[7] = {1,2,3,4,5,6,7};
	rotary(arr,7,15);
	for (int i = 0; i < 7; i++)
	{
		printf("%i\n", arr[i]);
	}
}