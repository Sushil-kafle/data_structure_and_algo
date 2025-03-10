#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *createLinkedList(vector<int> values)
{
    if (values.empty())
        return nullptr;
    ListNode *head = new ListNode(values[0]);
    ListNode *current = head;
    for (size_t i = 1; i < values.size(); i++)
    {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    return head;
}

class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {

        if (k == 0 || head == nullptr || head->next == nullptr)
            return head;

        ListNode *temp = head;
        ListNode *tail = head;
        int size = 0;

        while (temp != nullptr)
        {
            size++;
            if (temp->next == nullptr)
            {
                tail = temp;
            }
            temp = temp->next;
        }

        k = k % size;

        temp = head;

        for (int i = 1; i < size - k; i++)
        {
            temp = temp->next;
        }

        tail->next = head;
        head = temp->next;
        temp->next = nullptr;

        return head;
    }
};

void printLinkedList(ListNode *head)
{
    while (head)
    {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}

int main()
{
    Solution solution;
    vector<int> values;
    int num;
    while (cin >> num && (values.push_back(num), cin.get() != '\n'))
        ;

    ListNode *head = createLinkedList(values);

    int k = 4;

    cout << "Original list: ";
    printLinkedList(head);

    head = solution.rotateRight(head, k);

    cout << "Rotated list: ";
    printLinkedList(head);

    return 0;
}
