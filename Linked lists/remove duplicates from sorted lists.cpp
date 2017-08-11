/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 struct ListNode *findMiddle(struct ListNode *h){
	struct ListNode *f=h,*s=h;
	int i=0;
	while(f->next!=NULL){
		if(i==0){
			f=f->next;
			i=1;
		}else if(i==1){
			f=f->next;
			s=s->next;
			i=0;
		}
	}
	return s;
}

 struct ListNode *reverse(struct ListNode *head){
	struct ListNode *next=NULL,*prev=NULL, *curr=head;
	while(curr){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	
	return prev;
}
int Solution::lPalin(ListNode* A) {
    struct ListNode *mid=findMiddle(A);
	mid->next=reverse(mid->next);
	struct ListNode *head2=mid->next;
	struct ListNode *th1=A,*th2=head2;
	while(th2){
		if(th1->val==th2->val){
			th1=th1->next;
			th2=th2->next;
		}else{
			return 0;
		}
	}
	return 1;
}
