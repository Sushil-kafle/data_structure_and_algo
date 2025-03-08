#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList : public Node
{

public:
    Node *head;

    LinkedList() : Node(0)
    {
        this->head = nullptr;
    }

    void create_linked_list(vector<int> &a)

    {

        if (a.empty())
            return;

        head = new Node(a[0]);

        Node *temp = head;

        for (int i = 1; i < a.size(); i++)
        {
            temp->next = new Node(a[i]);

            temp = temp->next;
        }
    }

    void dsiplay_LinkedList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }

    LinkedList *merge_sorted(LinkedList *ll_2)
    {

        Node *p = this->head;

        Node *q = ll_2->head;

        LinkedList *ll_3 = new LinkedList();
        Node *dummy = new Node(0);

        Node *temp = dummy;

        while (p != nullptr && q != nullptr)
        {
            if (p->data > q->data)
            {
                temp->next = q;
                q = q->next;
            }
            else
            {
                temp->next = p;
                p = p->next;
            }

            temp = temp->next;
        }

        if (p == nullptr)
            temp->next = q;

        if (q == nullptr)
            temp->next = p;

        ll_3->head = dummy->next;

        delete dummy;
        return ll_3;
    }
};

int main()
{

    vector<int> a, b;
    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    while (cin >> num && (b.push_back(num), cin.get() != '\n'))
        ;

    LinkedList ll_1, ll_2;

    ll_1.create_linked_list(a);
    ll_2.create_linked_list(b);

    LinkedList *ll_3 = ll_1.merge_sorted(&ll_2);

    ll_3->dsiplay_LinkedList();

    delete ll_3;

    return 0;
}