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

    void insert(int value, int position)
    {

        Node *newnode = new Node(value);
        if (position == 0)
        {
            newnode->next = head->next;
            head = newnode;
            return;
        }

        Node *temp = head;
        for (int i = 1; i < position && temp != nullptr; i++)
        {
            temp = temp->next;
        }

        if(temp == nullptr)
        {
            return;
        }

        newnode->next = temp->next;
        temp->next = newnode;
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

    ll.insert(10, 2);
    ll.insert(20, 0);
    ll.insert(30, 16);
    ll.dsiplay_LinkedList();

    return 0;
}