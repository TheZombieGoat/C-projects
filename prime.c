#include <stdio.h>
#include <stdlib.h>

bool isPrime(int n)
{    
    for(int i = 2; (i*i) <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int countPrimes(int n){
    if(n <= 2)
        return 0;
    int count = 0;
    int i;
    for(i = 1; i < n; i+=2){
        if(isPrime(i) == true)
            count++;
    }
    return count;
}