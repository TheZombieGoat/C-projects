#include <stdio.h>

int factorial(int n)
{
	int temp;
	int i;
	int long long result = 1;
	int arr[n];
	int j = 0;
	for(i = 1; i <= n; i++)
	{
		 arr[j] = i;
		 j = j + 1;
	}

	if (n%2 == 0)
	{
	for (int s = 0; s < n-1; s++)
	{
		temp = arr[s]*arr[s+1];
		result*=temp;
		s = s+1;
	}
	}
	else
	{
		for (int s = 0; s < n-1; s++)
		{
			temp = arr[s]*arr[s+1];
			result*=temp;
			s = s+1;
		}
		result*=n;
	}

	return result;
}

int main(void)
{
	int george = factorial(5);
	printf("%i\n", george);
	
}
