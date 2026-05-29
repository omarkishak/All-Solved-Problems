/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *dummy = head;

        //make sure it's not empty.
        if(head == nullptr)
        return false;

        //keep going as long as we haven't reached an end to the linked list.
        while(head->next != nullptr){
            head = head->next;
            dummy->next = dummy;
            dummy = head;

            if(head->next == head)
            return true;
        }

        //if we reach an end, return false.
        return false;
    }
};