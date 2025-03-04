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

    void reverse_linked_list()
    {
        Node *curr = head->next;
        Node *prev = head;

        // make initial node point to null
        prev->next = nullptr;

        Node *temp;
        while (curr != nullptr)
        {
            // temporarily store next node
            temp = curr->next;

            // link current to previous
            curr->next = prev;

            // move prev and curr pointer forward
            prev = curr;
            curr = temp;
        }

        // update head to last node
        head = prev;
    }

    void reverse_linked_list_2()
    {
        Node *p = head;
        Node *q = nullptr;
        Node *r = nullptr;

        while (p != nullptr)
        {

            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }

        head = q;
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

    ll.reverse_linked_list_2();

    ll.dsiplay_LinkedList();

    return 0;
}