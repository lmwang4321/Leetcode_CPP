//19.cpp

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
        if(!head || !head->next){
            return NULL;
        }
        int idx = 0;
        head = removeUtil(head, n, idx);
        return head;
    }
    ListNode* removeUtil(ListNode* head, int n, int& idx){
        if(!head) return NULL;
        head->next = removeUtil(head->next, n, idx);
        idx++;
        //cout<<"idx: " << idx<<endl;
        //cout<<"head val: "<< head->val<<endl;
        if(idx == n){ 
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        return head;
    }
};
