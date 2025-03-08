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

    void insert(int index, int value)
    {

        if (index == 0)
        {
            Node *newnode = new Node(value);
            newnode->next = head;
            head->prev = newnode;
            head = newnode;

            return;
        }

        Node *temp = head;
        for (int i = 1; i < index && temp != nullptr; i++)
        {
            // cout << temp->data << endl;
            temp = temp->next;
        }

        if (temp == nullptr)
        {
            return;
        }

        Node *newnode = new Node(value);
        newnode->next = temp->next;
        newnode->prev = temp;

        temp->next = newnode;
    }

    void delete_node(int index)
    {

        // handle for starting
        if (index == 0)
        {
            Node *deleted = head;
            head = head->next;
            head->prev = nullptr;

            delete deleted;
            return;
        }

        Node *temp = head;
        for (int i = 1; i < index && temp->next != nullptr; i++)
        {
            temp = temp->next;
        }
        // cout << temp->data;

        // handle if index is greater than no of nodes
        if (temp->next == nullptr)
        {
            return;
        }

        Node *deleted = temp->next;
        if (temp->next->next != nullptr)
        {

            temp->next->next->prev = temp;
            temp->next = temp->next->next;
            delete deleted;
            return;
        }

        temp->next = nullptr;
        delete deleted;
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

    // ll_1.insert(0, 2);
    // ll_1.insert(7, 10);

    // ll_1.delete_node(0);
    ll_1.delete_node(5);

    ll_1.display_LinkedList();
}