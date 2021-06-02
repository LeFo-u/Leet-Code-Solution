class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int sum=0,count=0;
        ListNode *a=head;
        while(a){
            count++;
            a=a->next; }
        while(count--){
            if(head->val==1) sum+=pow(2,count);
            head=head->next; }
        return sum; }
};
