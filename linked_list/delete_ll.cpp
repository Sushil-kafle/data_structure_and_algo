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

    void delete_node(int position)
    {
        if (position == 0)
        {
            Node *deleted_node = head;
            head = head->next;
            delete deleted_node;
            return;
        }

        Node *curr = head;

        for (int i = 1; i < position && curr != nullptr; i++)
        {
            curr = curr->next;
        }

        if (curr == nullptr )
        {
            return;
        }

        Node *deleted_node = curr->next;
        curr->next = curr->next->next;
        delete deleted_node;
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

    ll.delete_node(2);

    ll.delete_node(0);
    ll.delete_node(10);
    ll.delete_node(2);
    ll.dsiplay_LinkedList();

    return 0;
}