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

class LL
{
public:
    Node *head;
    // Node *last;

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
            temp->next = new Node(a[i]);
            temp = temp->next;
        }

        temp->next = head;
    }

    void display_LinkedList()
    {
        Node *temp = head->next;

        cout << head->data << " ";

        while (temp != head)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void display_recursive()
    {
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

    ll_1.display_LinkedList();
}