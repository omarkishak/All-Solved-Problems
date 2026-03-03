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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1){
           if (list2)
           return list2;
           else
           return list1;
        } 

        if (!list2){
           if (list1)
           return list1;
           else
           return list2;
        }
        ListNode* result = list1;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        if(list1->next && list2->next){
        while(list1->next && list2->next){
           
            temp1 = temp1->next;
            temp2 = temp2->next;
    
            
            list1->next = list2;
            list2->next = temp1;

            list1 = temp1;
            list2 = temp2;

            if(!list1->next){
                list1->next = list2;
            }
        }
        }
        else{
            if(list1->val < list2->val){
            list1->next = list2;
            return list1;}
            else{
            list2->next = list1;
            return list2; 
            }
        }



       return result;
    }
};
