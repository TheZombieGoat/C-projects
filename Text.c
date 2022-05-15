#include <stdio.h>

int main()
{
	int n;
	FILE *fp = fopen("increment.txt","r+");;
	fscanf(fp,"%d",&n);
	n += 1;
	rewind(fp);
	fprintf(fp,"%d",n);
	fclose(fp);
	
	return 0;
}