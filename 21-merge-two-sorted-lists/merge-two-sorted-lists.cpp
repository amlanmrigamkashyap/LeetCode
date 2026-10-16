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
 typedef ListNode ln;
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(!head1) return head2;
        if(!head2) return head1;
        while(head1 && head1->val<=head2->val){
            ln* temp = head1;
            head1 = head1->next;
            temp->next = head2;
            head2 = temp;
        }
        ln* temp = head2;
        while(temp->next){
            if(!head1) return head2;
            if(head1->val<temp->next->val){
                ln* nxt = temp->next;
                temp->next = head1;
                head1 = head1->next;
                temp->next->next = nxt;
            }
            temp = temp->next;
        }
        temp->next = head1;
        return head2;
    }
};