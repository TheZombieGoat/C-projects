bool isPowerOfThree(int n){
    bool x = false;
    if(n == 1)
        return true;
    if(n % 3 != 0)
        return false;
    for(int i = 3; i < n+1; i*=3){
        if(i == n){
            x = true;
            break;
        }
    }
    return x;

}
