/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// You are given the head of a singly linked-list. The list can be represented as:

// L0 → L1 → … → Ln - 1 → Ln
// Reorder the list to be on the following form:

// L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
// You may not modify the values in the list's nodes. Only nodes themselves may be changed.



class Solution {
public:
    void reorderList(ListNode* head) {
        // first find the middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head->next;
        if(head!=nullptr){
            
            while( fast!=nullptr &&fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
            
            }
        }


        ListNode* secondListHead = slow->next;
        slow->next = nullptr;
        ListNode* prev = nullptr;
        
        //Reversing the scond list
        while(secondListHead != nullptr){
          ListNode* next = secondListHead->next;
          secondListHead->next = prev;
          prev = secondListHead;
          secondListHead = next;
        }


        //because the prev will be holding the last node not the secondListHead. secondListHead will be null
        secondListHead = prev;
        ListNode* first = head;


        //merging the lists 
        while(secondListHead !=nullptr){
            ListNode* temp1 = first->next;
            ListNode* temp2 = secondListHead->next;
            first->next = secondListHead;
            secondListHead->next = temp1;
            first = temp1;
            secondListHead = temp2;
        }
       
    }
};