#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {

        this->data = val;
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

    void insert_sorted(int val)
    {
        Node *newnode = new Node(val);
        Node *curr = head;
        Node *prev = nullptr;

        // handle for 0th position
        if (val < curr->data)
        {
            newnode->next = head->next;
            head = newnode;
            return;
        }

        // handle for remaining position
        while (curr != nullptr && curr->data < val)
        {
            prev = curr;
            curr = curr->next;
        }

        newnode->next = prev->next;
        prev->next = newnode;
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

    ll.insert_sorted(5);
    ll.insert_sorted(0);

    ll.dsiplay_LinkedList();

    return 0;
}