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

    void recurse_reverse(Node *q, Node *p)
    {
        if (p != nullptr)
        {

            recurse_reverse(p, p->next);
            p->next = q;
        }
        else
        {
            head = q;
        }
    }

    void reverse_linked_list()
    {
        recurse_reverse(nullptr, head);
    }
};

int main()
{

    vector<int> a;
    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    LinkedList ll;

    ll.create_linked_list(a);

    ll.reverse_linked_list();

    ll.dsiplay_LinkedList();

    return 0;
}