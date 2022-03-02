#include <stdio.h>


int fib(int n)
{	
	int count;
	if(n == 1)
	{
		count = 1;
		return 1;
	} else if(n == 2){
		count = 1;
		return 1;
	}else 
	return fib(n-1)+fib(n-2);
}
int main()
{
	int x = 0;
	scanf("%i", &x);
	printf("%i\n", fib(x));
}