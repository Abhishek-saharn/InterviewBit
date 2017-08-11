/**
 * Definition for singly-linked list.
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 */
public class Solution {
	public ListNode removeNthFromEnd(ListNode head, int n) {
	       if(head == null)
        return null;
 
    //get length of list
    ListNode p = head;
    int len = 0;
    while(p != null){
        len++;
        p = p.next;
    }
 if(len<n)
 {
     head=head.next;
     return head;
 }
    //if remove first node
    int fromStart = len-n+1;
  //  System.out.println(fromStart+" "+n+" "+len);
    if(fromStart==1)
    { head = head.next;
    
 return head;
    }
    //remove non-first node    
    p = head;
    int i=0;
    while(p!=null){
        i++;
        if(i==fromStart-1){
            p.next = p.next.next;
            break;
        }
        p=p.next;
    }
 
    return head;
	}
}
