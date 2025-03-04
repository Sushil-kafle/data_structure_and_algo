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

    void search_replace(int n)
    {
        Node *prev = nullptr;
        Node *curr = head;

        if (curr->next == nullptr)
        {
            return;
        }

        while (curr != nullptr && curr->data != n)
        {
            prev = curr;
            curr = curr->next;
        }

        if (curr == nullptr)
        {
            return;
        }

        prev->next = curr->next;
        curr->next = head;
        head = curr;
    }
};
int main()
{

    vector<int> a = {
        1,
        2,
        3,
        4,
        5,
    };

    LinkedList ll;
    ll.create_linked_list(a);

    ll.search_replace(10);
    ll.dsiplay_LinkedList();

    return 0;
}