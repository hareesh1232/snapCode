vector<int> Solution::primesum(int A) {
    vector<int>v;
    bool prime[A+1];
    for(int i=2;i<A+1;i++)
    prime[i]=1;
    for(int i=2;i<=A;i++)
    {
      if(prime[i]==1)
      {
          for(int j=2;i*j<A+1;j++)
          {
              prime[i*j]=0;
          }
      }
    }
    for(int i=2;i<A+1;i++)
    {
        if(prime[i] && prime[A-i])
        {
            v.push_back(i);
            v.push_back(A-i);
            return v;
        }
    }
}
