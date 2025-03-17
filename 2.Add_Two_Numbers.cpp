class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode();
        ListNode *current = head;
        int sum = 0;
        int carry = 0;
        
        // l1 != nullptr || l2 != nullptr || carry != 0
        while(l1 || l2 || carry){
            sum = carry;
            
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }

            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;

            current->next = new ListNode(sum % 10);
            current = current->next;
        }

        return head->next;
    }
};