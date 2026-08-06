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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL) return NULL;

        ListNode* temp = head;
        int cnt = 0;
        while(temp!=NULL){
            cnt++;
            temp = temp->next;
        }
        temp = head;
        int diff = cnt - n;
        if(diff==0) return temp->next;
        ListNode* prev = NULL;
        for(int i=0;i<diff;i++){
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        temp->next=NULL;
        return head;
    }
};
