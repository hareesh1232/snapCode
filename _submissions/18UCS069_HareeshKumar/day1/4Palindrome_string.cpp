int Solution::isPalindrome(string A) {
    transform(A.begin(), A.end(), A.begin(), ::tolower);
    int i=0,j=A.length()-1;
    while( i<j)
    {
        while( i<j && !iswalnum(A[i]))
          i++;
        while(i<j && !iswalnum(A[j]))
          j--;
        if(A[i]!=A[j])
          return 0;
        i++;j--;
    }
    return 1;
}
