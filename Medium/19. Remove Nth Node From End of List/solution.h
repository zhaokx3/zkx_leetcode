#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p1 = head;
        ListNode* p2 = head;
        for(int i = 0; i < n; i++) {
            p1 = p1->next;
            if (!p1) return head->next; // length=1 and n == length
        }
        
        while(p1->next) {
            p1 = p1->next;
            p2 = p2->next;
        }
        ListNode* t = p2->next->next;
        p2->next = t;
        return head;
    }
};

