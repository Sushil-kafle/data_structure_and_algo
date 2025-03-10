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
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {

        if (head == nullptr)
            return nullptr;
        if (head->next == nullptr)
            return head;

        ListNode *p = head->next;
        ListNode *q = head;

        while (p != nullptr)
        {

            while (q->val == p->val)
            {
                p = p->next;
                if (p == nullptr)
                {
                    break;
                }
            }

            q->next = p;
            q = p;

            if (p != nullptr)
                p = p->next;
        }
        return head;
    }
};