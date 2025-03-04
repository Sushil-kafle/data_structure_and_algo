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

    bool check_sorted()
    {

        Node *temp = head;

        if (temp->next == nullptr)
        {
            return true;
        }

        while (temp->next != nullptr)
        {

            if (temp->data > temp->next->data)
            {
                return false;
            }

            temp = temp->next;
        }

        return true;
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

    if (ll.check_sorted())
    {
        cout << "sorted" << endl;
    }
    else
    {
        cout << "not sorted" << endl;
    }

    // ll.dsiplay_LinkedList();

    return 0;
}