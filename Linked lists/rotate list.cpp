/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* head, int k) {
        
        ListNode* thead=head,*prev=NULL;
        int n=0;
        if(head==NULL)return head;
        while(thead){
            n++;
            prev=thead;
            thead=thead->next;
        }
         k=k%n;
        thead=head;
        for(int i=0;i<n-k-1;i++){
            thead=thead->next;
        }
        
        
        prev->next=head;
        head=thead->next;
        thead->next=NULL;
        return head;
    
}
