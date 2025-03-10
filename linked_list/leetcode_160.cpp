/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//  hint: make it equal size before comparing
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {

        ListNode *a = headA;
        ListNode *b = headB;

        int lenA = 0;
        int lenB = 0;

        while (a != nullptr)
        {
            lenA++;
            a = a->next;
        }

        while (b != nullptr)
        {
            lenB++;
            b = b->next;
        }

        a = headA;
        b = headB;

        if (lenA > lenB)
        {
            for (int i = 0; i < lenA - lenB; i++)
            {
                a = a->next;
            }
        }
        else
        {
            for (int i = 0; i < lenB - lenA; i++)
            {
                b = b->next;
            }
        }

        while (a != nullptr && b != nullptr)
        {
            if (a == b)
            {
                return a;
            }

            a = a->next;
            b = b->next;
        }

        return nullptr;
    }
};