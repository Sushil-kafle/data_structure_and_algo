/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;

        ListNode *temp = nullptr;

        int loop_size = 0;
        while (fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;

            if (fast == slow)
            {
                ListNode *temp = head;

                while (temp != slow)
                {
                    slow = slow->next;
                    temp = temp->next;
                }

                return slow;
            }
        }

        return nullptr;
    }
};