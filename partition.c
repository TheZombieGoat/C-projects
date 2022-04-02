#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int partition(int arr[], int narr)
{
	int pivot = arr[0];
	int j = 0;
	int temp = 0;
	int k = narr-1;
	int same = 0; 

	for (int i = 0; i < narr; i++)
	{	
		if(arr[i] < pivot){
			arr[j] = arr[i];
			j++;
		}else if(arr[i] > pivot && k > i){
			temp = arr[k];
			arr[k] = arr[i];
			arr[i] = temp;
			k--;
			i--;
		}

		if(i == narr-1)
			arr[j] = pivot;
	}
	return j;
}

int main()
{
	int arr[30] = {7,2,3,4,5,6,1,8,9,2,11,12,13,55,44,4,2,35,77,34,51,44,2,3,4,11,2,3,4,100};
	int z = partition(arr,30);
	for (int j = 0; j < 30; j++)
	{
		printf("This is arr[%i] :  %i\n",j,arr[j]);
	}
	printf("\nThis is Location: %i",z);

	return 0;
}