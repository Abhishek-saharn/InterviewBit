/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* head, int x) {
   
    int n=0;
        if(head==NULL||head->next==NULL)return head;
        ListNode* thead,*prev=new ListNode(-1);
        prev->next=head;
        head=prev;
        thead=head;
        while(thead->next!=NULL){ n++;thead=thead->next;}

        while(n>0){
            if(prev->next->val>=x){
                
                thead->next=new ListNode(prev->next->val);
                thead=thead->next;
                prev->next=prev->next->next;
                
                 n--;
                
            }else{
                prev=prev->next; n--;
            }
           
        }    
        
        
      
        return head->next;
}
