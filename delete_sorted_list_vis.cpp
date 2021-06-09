#include<iostream>

struct ListNode{
	int val;
	ListNode* next;
};

void pushNode(int v, ListNode **head_ref){
	ListNode* new_node = new ListNode;
	new_node->val = v;
	new_node->next = *head_ref;
    *head_ref = new_node;
}

class Solution{
public:
    ListNode* deleteDuplicates(ListNode* head){
        ListNode* cur = head;
        ListNode* pre = NULL;
        while(cur != NULL){
            if (pre == NULL){
                head = cur;
            }
            if (pre != NULL){
                if (cur->val == pre->val){
                    pre->next = cur->next;
                    cur = cur->next;
                }
                else{
                    pre = cur; //pre->next = cur;
                    cur = cur->next;
                }
            }
            else{
                pre = cur;
                cur = cur->next;
            }
            return head;
        }
    }
};

int main(){
	ListNode* sample = NULL;
    sample->val = 1;
	pushNode(3, &sample);
    
}