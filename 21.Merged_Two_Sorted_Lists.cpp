class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *merged = new ListNode();
        ListNode *current = merged;

        while(list1 && list2){
            if(list1->val > list2->val){
                current->next = list2;
                list2 = list2->next;
            }
            else{
                current->next = list1;
                list1 = list1->next;
            }
            current = current->next;
        }

        current->next = list1? list1 : list2;
        return merged->next;
    }
};