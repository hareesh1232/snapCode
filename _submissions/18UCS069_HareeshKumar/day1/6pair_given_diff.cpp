int Solution::solve(vector<int> &A, int B) {
    for(int i=0;i<A.size()-1;i++)
    {
        for(int j=i+1;j<A.size();j++)
        {
            if(abs(A[j]-A[i])==abs(B))
            return 1;
        }
    }
    return 0;
}
