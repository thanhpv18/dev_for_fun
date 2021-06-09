class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* op = new ListNode();

        while (l1 && l2){
        	if (l1->val >= l2->val){
        		op->next = new ListNode(l1->val);
        		l1 = l1->next;
        	}
        	else{
        		op->next = new ListNode(l2->val);
        		l2 = l2->next;
        	}
        }

        if (l1){
        	op->next = l1;
        }
        if (l2){
        	op->next = l2;
        }
        return op;
    }
};