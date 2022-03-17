#include <stdio.h>
#include <stdlib.h>

void mergeSortA(int *arr, int l, int r);
void mergeSortO(int *arr, int l, int r);
void merge(int *arr, int l, int m, int r);
void inss(int *arr, int narr);

int main()
{
    int narr = 0;
    int input = 0;
	printf("\nType in number of elements: ");
    scanf("%d", &narr);
    int *p = (int*)malloc(sizeof(int[narr]));

    for (int j = 0; j < narr; j++)
    {
        printf("\nType in value of element %i : ", (j+1));
        scanf("%d", &input);
        p[j] = input;
    }

    if(narr < 45){
        mergeSortO(p,0,narr);
        printf("\nUsed Original.\n");
    } else{
        mergeSortA(p,0,narr);
        printf("\nUsed Altered.\n");
    }

	for (int i = 0; i < narr; i++)
	{
		printf("%d\n", p[i]);
	}

    free(p);
	return 0;
}


void inss(int *arr, int narr) //insertion sort
{
    int i,j,key;
    for (i = 0; i < narr; i++)
    {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j - 1;
        }

        arr[j+1] = key;
    }
}

void merge(int *arr, int l, int m, int r) //merge sort
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int *L = malloc(sizeof(int[n1]));
    int *R = malloc(sizeof(int[n2]));
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j]; 
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
    free(L);
    free(R);
}

void mergeSortA(int *arr, int l, int r) //merge sort altered version
{
    if (l < r){
        int narr = r-l;
        int m = l + (r - l) / 2;
        mergeSortA(arr, l, m);
        mergeSortA(arr, m + 1, r);
        inss(arr, narr);
    }
}
void mergeSortO(int *arr, int l, int r)  //merge sort original
{
    if (l < r){
            int m = l + (r - l) / 2;
            mergeSortO(arr, l, m);
            mergeSortO(arr, m + 1, r);
            merge(arr, l, m, r);
        }
}


