#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class LL
{
public:
    Node *head;

    LL()
    {
        this->head = nullptr;
    }

    void create_linked_list(vector<int> &a)
    {
        if (a.empty())
            return;

        head = new Node(a[0]);
        Node *temp = head;

        for (size_t i = 1; i < a.size(); i++)
        {
            Node *p = temp;

            temp->next = new Node(a[i]);
            temp = temp->next;
            temp->prev = p;
        }
    }

    void display_LinkedList()
    {
        Node *temp = head;

        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void reverse()
    {
        Node *p = head;

        Node *temp = nullptr;
        while (p != nullptr)
        {
            if (p->next == nullptr)
            {
                head = p;
            }

            temp = p->next;
            p->next = p->prev;
            p->prev = temp;

            p = p->prev;
        }
    }
};

int main()
{

    vector<int> a;
    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    LL ll_1;

    ll_1.create_linked_list(a);

    ll_1.reverse();

    ll_1.display_LinkedList();
}