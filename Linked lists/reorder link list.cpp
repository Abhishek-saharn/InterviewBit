/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
  ListNode* reverse(ListNode *head){
        ListNode* prev=NULL,*next=NULL,*curr=head;
        if(head==NULL||head->next==NULL)return head;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
ListNode* Solution::reorderList(ListNode* head) {
        
         if(head==NULL){
           return head;
        }
        ListNode* f=head,*th=head;
      //  int l=0;
        while(f&&f->next){
            f=f->next->next;
            th=th->next;
        }
    
        ListNode* tt=th->next;
        th->next=NULL;
        th=reverse(tt);
        
         ListNode* thead=head,*tmp1=NULL,*tmp2=NULL;
        
        while(th&&thead){
            tmp1=thead->next;
            tmp2=th->next;
            thead->next=th;
            th->next=tmp1;
            thead=tmp1;
            th=tmp2;
        }
     
       
       return head;
 
}
