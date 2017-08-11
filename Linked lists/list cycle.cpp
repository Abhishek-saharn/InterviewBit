/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* head) {
    
        int flag=0;
        ListNode *fptr=head,*sptr=head;
       // ListNode *t=new struct ListNode;
        while(fptr!=NULL&&fptr->next!=NULL&&sptr!=NULL){
            fptr=fptr->next->next;
            sptr=sptr->next;
            if(fptr==sptr){
                flag=1;
                break;
        
            }
        }
        
        if(flag==1){
        fptr=head;
        while(fptr!=NULL&&fptr->next!=NULL&&sptr!=NULL){
            if(fptr==sptr){
                
                return fptr;
                
            }
            
            fptr=fptr->next;
            sptr=sptr->next;
            
        }
            
        }
       
       return NULL;
    
    
}
