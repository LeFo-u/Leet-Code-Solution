// Solution : 1 ->-> Counting the length of Linked List and then going to the middle of the Linked List .. Time : O(n) Space : O(n)..

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

// Solution : 2 ->-> Using slow and fast pointer.. Time : O(n) Space : O(1)..
//  a : Slow pointer will take one step and fast pointer two steps.
//  b : So, when fast pointer reaches to the end of Linked List slow pointer will be at middleNode

ListNode* middleNode(ListNode* head) {
       ListNode *slow = head, *fast = head;
       while (fast && fast->next)
           slow = slow->next, fast = fast->next->next;
       return slow;
   }
