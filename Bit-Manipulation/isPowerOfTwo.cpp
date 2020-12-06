bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return !(n & (n - 1)); //& of n and (n-1) is 0 for 2^x
						                   //so we have to use ! operator
    }
