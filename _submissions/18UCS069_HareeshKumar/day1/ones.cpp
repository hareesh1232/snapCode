int Solution::numSetBits(unsigned int A) {
    int rem,count=0;
    while(A)
    {
        if(A%2==1)
        count++;
        A=A/2;
    }
    return count;
}
