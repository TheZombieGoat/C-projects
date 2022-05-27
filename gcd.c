#include <stdio.h>
#include <stdlib.h>

int assist(int x, int y)
{
	if(x < 0 || y < 0){
		printf("Invalid Input\n");
		exit(0);
	}else if(x % y == 0)
		return y;
	else if(y % x == 0)
		return x;

	int z;
	if(x < y)
		z = x;
	else
		z = y;
	return z/2;
}

int gcd(int x, int y)
{
	int z = assist(x,y);
	for(; z > 1; z--){
		if(x % z == 0 && y % z == 0)
			return z;
	}
	printf("\nThe numbers share no factor.\n");
	exit(0);
}

int main()
{
	int a,b;
	printf("Enter two numbers:\n");
	printf("Number 1 is: ");
	scanf("%i", &a);
	printf("\nNumber 2 is: ");
	scanf("%i", &b);
	int x = gcd(a,b);
	printf("\nThe common factor of %i and %i is : %i\n", a,b,x);
	int d = 5/2;
	printf("%i\n", d);
}