/* Time Complexity : O(n)
Space complexity : O(n)
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* cur=headA;
        int lenA=0;
        int lenB=0;
        if(headA==nullptr)
            return nullptr;
        
        while(cur!=nullptr)
        {
            lenA++;
            cur=cur->next;
        }
        cur=headB;
        while(cur!=nullptr)
        {
            lenB++;
            cur=cur->next;
        }
        while(lenA >lenB)
        {
            headA=headA->next;
            lenA--;
        }
        while(lenB>lenA)
        {
             headB=headB->next;
            lenB--;
        }
        while(headA!=headB)
        {
            headA=headA->next;
            headB=headB->next;
        }
        return headB;
    }
};
