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
    ListNode *deleteMiddle(ListNode *head)
    {

        if (head->next == nullptr)
            return nullptr;

        ListNode *p = head->next;
        ListNode *q = head;

        while (p != nullptr && p->next != nullptr && p->next->next != nullptr)
        {
            q = q->next;
            p = p->next->next;
        }

        p = q->next;

        if (p == nullptr)
        {
            q->next = nullptr;
        }
        else
        {

            q->next = q->next->next;
        }
        delete p;

        return head;
    }
};