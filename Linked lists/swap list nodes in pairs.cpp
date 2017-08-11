/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* head) {
       ListNode* thead=head;
    if(head==NULL)return head;
    while(head&&head->next){
        int temp=head->val;
        head->val=head->next->val;
        head->next->val=temp;
        head=head->next->next;
    }
    
    return thead;
}
