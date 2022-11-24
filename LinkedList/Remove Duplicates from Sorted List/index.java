// /**
//  * Definition for singly-linked list.
//  * public class ListNode {
//  *     int val;
//  *     ListNode next;
//  *     ListNode() {}
//  *     ListNode(int val) { this.val = val; }
//  *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
//  * }
//  */
// class Solution {
//     public ListNode deleteDuplicates(ListNode head) {
//         ListNode currentnode = head;
//         while( currentnode!= null && currentnode.next!= null){
//             if(currentnode.val == currentnode.next.val){
//                 currentnode.next = currentnode.next.next;
//             }else{
//                 currentnode = currentnode.next;
//             }
           
//         }
//         return head;
//     }
// }


//!!!!!!!! I was thinking that I have to use another while loop to check for 
// 3 consecutive 1s i.e 1->1->1->1 that is not required because if in line 15 if if condition is true then
// the current node remains same so we can check for N concecutive numbers