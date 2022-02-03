#include <stdio.h>

int main()
{
	int arr[6] = {1,2,22,4,-5,2};
	int a;
	for (int i = 0; i < 6; ++i)
	{
		for(int a = 0; a < 6; ++a)
	{   
		if(arr[a+1] < arr[a] && a+1 != 6)
		{
			int b = arr[a];
			arr[a] = arr[a+1];
			arr[a+1] = b;
		}	
	}
	}
	
	
	
	for (int c = 0; c < 6; ++c)
	{
		printf("\n%i", arr[c]);
	}

}