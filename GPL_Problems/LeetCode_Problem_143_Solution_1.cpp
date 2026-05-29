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

class Solution {
public:
    void reorderList(ListNode* head) {

        if(head == nullptr || head->next == nullptr)
            return;

        //count size
        int n = 0;
        ListNode* temp = head;

        //Create reversed copy
        ListNode* curr = head;
        ListNode* reversed = nullptr;

        while(curr != nullptr){
            reversed = new ListNode(curr->val, reversed);
            curr = curr->next;
            n++;
        }

        //save reordered values
        vector<int> order;

        ListNode* front = head;
        ListNode* back = reversed;

        //only iterate through half the list
        for(int i = 0; i < n / 2; i++){

            order.push_back(front->val);
            order.push_back(back->val);

            front = front->next;
            back = back->next;
        }

        //If odd length, add middle element
        if(n % 2 != 0)
            order.push_back(front->val);

        //rewrite original list
        temp = head;
        int i = 0;

        while(temp != nullptr){
            temp->val = order[i];
            temp = temp->next;
            i++;
        }
    }
};