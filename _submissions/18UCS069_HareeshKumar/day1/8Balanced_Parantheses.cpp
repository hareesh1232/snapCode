int Solution::solve(string A) {
    stack<char> st;
    int i=0;
    while(i<A.size())
    {
        if(A[i]=='(')
        st.push('(');
        if(A[i]==')' && st.empty())
        {
            return 0;
        }
        else if(st.top()=='(')
        st.pop();
    }
    if(st.empty())
    return 1;
    else return 0;
}

