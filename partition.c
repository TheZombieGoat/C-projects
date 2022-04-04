#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) //helper function
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int l, int r)
{
	int temp = 0;
	int j = l;
	int pivot = arr[l];

	for(int i = l; i < r; i++){

		if(arr[i] <= pivot){
			swap(&arr[i], &arr[j]);
			j++;
		}
	}
	swap(&arr[j-1], &arr[l]);
	return j-1;
}

int partsort(int arr[], int l, int r)
{
	if(l < r){
		int z = partition(arr,l,r);
		partsort(arr,l,z);
		partsort(arr,z+1,r);
	}
}


int main()
{
	int arr[30] = {7,2,3,4,7,6,1,8,9,2,11,12,13,55,44,4,2,35,77,34,51,44,2,3,4,11,2,3,4,100};
	partsort(arr,0,30);
	for (int j = 0; j < 30; j++)
	{
		printf("This is arr[%i] :  %i\n",j,arr[j]);
	}
	
	return 0;
}
