#include<bits/stdc++.h>

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    unordered_set<ListNode*> nodeSet;

    while (headA != NULL) {
        nodeSet.insert(headA);
        headA = headA->next;
    }

    while (headB != NULL) {
        if (nodeSet.find(headB) != nodeSet.end()) {
            return headB; // Intersection found
        }
        headB = headB->next;
    }

    return NULL;
    }
};
