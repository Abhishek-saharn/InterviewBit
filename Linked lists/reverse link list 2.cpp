
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* head, int m, int n) {
        ListNode* thead=head;
            if(m<1 || m>=n || !thead)return head;
           
            ListNode* tprev=new ListNode(-1);
            tprev->next=thead;
            thead=tprev;

         
            for(int i=0;i<m-1;i++){
                thead=thead->next;
            }
            
            
            ListNode* prev=thead->next,*curr=thead->next->next, *next=NULL;    
            for(int i=0;i<n-m;i++){
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
            }
            thead->next->next=curr;
            thead->next=prev;
            thead=tprev->next;
            return thead;
        
}
