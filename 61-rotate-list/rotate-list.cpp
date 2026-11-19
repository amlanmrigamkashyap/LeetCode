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
using ll = long long;
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !(head->next)) return head;

        ln* temp = head;
        ll n=0;
        while(temp){
            n++;
            temp=temp->next;
        }
        k = k%n;
        ll kk = n - k - 1;
        temp = head;
        while(kk--){
            temp = temp->next;
        }
        ln* prev = temp;
        ln* nxt = temp->next;
        if(!nxt) return head;
        while(temp->next!=nullptr) temp=temp->next;
        temp->next = head;
        prev->next = nullptr;
        return nxt;
    }
};