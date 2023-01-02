// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode* head = new ListNode();
//         ListNode* newlist = head;

//         int carry = 0;

//         while(l1!=NULL || l2 != NULL){
//             int l1_val = (l1 !=NULL) ? l1->val:0;  
//             int l2_val = (l2 !=NULL) ? l2->val:0;
//             int current_sum = l1_val + l2_val + carry;
            
//             carry = current_sum/10;
//             int digit = current_sum%10;
//             ListNode* temp = new ListNode(digit);
//             newlist->next = temp;

//             if(l1!=NULL) l1= l1->next;
//             if(l2!=NULL) l2= l2->next;
//             newlist = newlist->next;

//         }

//         if(carry>0){
//             ListNode* newNode = new ListNode(1);
//             newlist->next = newNode;
//             newlist = newlist->next;
//         }

//         return head->next;
//     }


// };