/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 ListNode* merge(ListNode* h1,ListNode* h2){
     ListNode* newHead=NULL,*prev=NULL;
    if(!h1)return h2;
    if(!h2)return h1;
    
    while(h1&&h2){
        if(h2->val<h1->val){
            //cout<<"Hello";
            if(newHead==NULL){
                newHead=h2;
                prev=h2;
                h2=h2->next;
                   //  prev=prev->next;
                    //prev->next=NULL;
            }else{
                prev->next=h2;
                prev=prev->next;
                h2=h2->next;
               
                
            }
        }
        else{
           // cout<<"Hello";
             if(newHead==NULL){
                newHead=h1;
                prev=h1;
                h1=h1->next;
              //  prev=prev->next;
                //prev->next=NULL;
            }else{
                prev->next=h1;
                 prev=prev->next;
                 h1=h1->next;
                 
            }
        }
        
    }
    if(h1){
        prev->next=h1;
       // h1=h1->next;
    }
        if(h2){
        prev->next=h2;
       //     h2=h2->next;
    }
    return newHead;    
 }
ListNode* Solution::mergeKLists(vector<ListNode*> &v) {
   
   
        if(v.empty())return NULL;
        for(int i=1;i<v.size();i++)
        {
            v[i]=merge(v[i-1],v[i]);
        }
        return v[v.size()-1];
    }

