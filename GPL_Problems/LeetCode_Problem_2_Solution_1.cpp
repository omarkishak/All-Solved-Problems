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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long long num1 = 0, num2 = 0, result_num = 0;
        long long multi = 1;

        while(l1 != nullptr || l2 != nullptr){
            if(l1 != nullptr){
                num1 += (l1->val)*multi;
                l1 = l1->next;
            }
            
            if(l2 != nullptr){
                num2 += (l2->val)*multi;
                l2 = l2->next;
            }
            
            multi *= 10;
        }

        result_num = num1 + num2;
        ListNode* result = new ListNode();
        ListNode* return_result = result;

        while(result_num != 0){
            result->val = result_num % 10;

            result_num = floor(result_num / 10);

            if(result_num != 0){
                ListNode* add = new ListNode();
                result->next = add;
                result = result->next;
            }
        }
        return return_result;
        
    }
};