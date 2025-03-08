#include <iostream>
#include "LinkedList.h"

class LinkedList : public LL
{
public:
    void create_loop_linked_list(vector<int> &a)
    {
        if (a.empty())
            return;

        head = new Node(a[0]);
        Node *temp = head;

        Node *loop;

        for (size_t i = 1; i < a.size(); i++)
        {

            if (i == a.size() / 2)
            {
                loop = temp;
            }

            temp->next = new Node(a[i]);
            temp = temp->next;
            if (i == a.size() - 1)
            {

                temp->next = loop;
            }
        }
    }

    void detect_loop()
    {
        Node *p = head;
        Node *q = head->next;

        while (q != nullptr)
        {

            if (p == q)
            {
                cout << "loop detected" << endl;
                break;
            }

            if (q->next == nullptr || q->next->next == nullptr)
            {
                cout << "no loop detected" << endl;
                break;
            }

            p = p->next;
            q = q->next->next;
        }
    }
};

int main()
{

    vector<int> a;
    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    LinkedList ll_1;

    ll_1.create_linked_list(a);
    // ll_1.create_loop_linked_list(a);
    ll_1.detect_loop();

    return 0;
}