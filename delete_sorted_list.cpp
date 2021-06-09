// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         ListNode* cur = head;
//         ListNode* pre = NULL;
//         while (cur != NULL) {
//             if (pre == NULL) head = cur;
//             if (pre != NULL) {
//                 if (cur->val == pre->val) {
//                     pre->next = cur->next;
//                     cur = cur->next;
//                 } else {
//                     pre = cur;
//                     cur = cur->next;
//                 }
//             } else {
//                 pre = cur;
//                 cur = cur->next;
//             }
//         }
//         return head;
//     }
// };

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
}