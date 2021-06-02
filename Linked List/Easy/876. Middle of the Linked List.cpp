class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *a=head;
        int count=0;
        while(a){
            count++;
            a=a->next; }
        if(count%2==0){
            ListNode *b=new ListNode();
            for(int i=0;i<(count/2+1)-1;i++) head=head->next;
            b->val=head->val;
            b=head;
            return b; }
        else{
            ListNode *b=new ListNode();
            for(int i=0;i<((count+1)/2)-1;i++) head=head->next;
            b->val=head->val;
            b=head;
            return b; } }
};
