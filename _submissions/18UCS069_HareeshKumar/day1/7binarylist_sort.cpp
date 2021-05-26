
ListNode* Solution::solve(ListNode* A) {
    ListNode *temp=A;
    int zeros=0,ones=0;
    while(temp)
    {
        if(temp->val==0)
        zeros++;
        else ones++;
        temp=temp->next;
        
    }
    temp=A;
    while(zeros)
    {
       temp->val=0;
       temp=temp->next;
       zeros--;
    }
    while(ones)
    {
        temp->val=1;
        temp=temp->next;
        ones--;
    }
    return A;
}
