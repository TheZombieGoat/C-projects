#include <stdio.h>

int fact2(int n)
{
	if(n == 1){
		return 1;
	}
	while(n != 1){
	return n*fact2(n-1);
	}
}

int main()
{
	int x = 0;
	printf("Type in any number between 1-15: ");
	scanf("%i", &x);
	if(x > 0 && x < 16){
		printf("%i\n", fact2(x));
		return 0;
	} else {
		printf("Invalid Input ! Try Again.\n");
		main();
	}
}