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

    void merge(LinkedList ll_2)
    {

        Node *temp = this->head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = ll_2.head;
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

    ll_1.merge(ll_2);

    ll_1.dsiplay_LinkedList();

    return 0;
}