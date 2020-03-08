#include<string>
#include<cmath>
#include<algorithm>
#include<stack>
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
    ListNode* swapPairs(ListNode* head) {
        if (!head || !(head->next)) return head;
        ListNode* p1 = head;
        ListNode* p2 = head->next;
        int isHead = 1;
        ListNode* ans;
        
        while(p1 && p2 && p1->next) {
            if (isHead) {
                p1->next = p2->next;
                p2->next = p1;
                ans = p2;
                isHead = 0;
            } else {
                ListNode* p = p1;
                p2 = p1->next->next;
                p1 = p1->next;
                
                if (p1 && p2) {
                    p1->next = p2->next;
                    p2->next = p1;
                    p->next = p2;
                }
            }
        }
        return ans;
    }
};

