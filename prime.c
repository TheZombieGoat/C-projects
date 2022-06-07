#include <stdio.h>
#include <stdlib.h>

int countPrimes(int n){
    if(n <= 2)
        return 0;
    int count = 0;
    bool *arr = malloc(sizeof(int)*n);
    for(int i = 2; i < n; i++){
        arr[i] = true;
    }
    for(int i = 2; i*i < n; i++){
        if(!arr[i])
            continue;
        for(int j = i*i; j < n; j+=i){
            arr[j] = false;
        }
    }
    for(int i = 2; i < n; i++){
        if(arr[i])
            count++;
    }
    free(arr);
    return count;
}
