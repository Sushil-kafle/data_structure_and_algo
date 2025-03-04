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

    static Node *form_linked_list(vector<int> &a)
    {
        Node *head = new Node(a[0]);

        Node *temp = head;

        for (int i = 1; i < a.size(); i++)
        {
            temp->next = new Node(a[i]);
            temp = temp->next;
        }

        return head;
    }

    void display_node()
    {
        Node *temp = this;

        while (temp != nullptr)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

void recursive_display(Node *p)
{
    if (p != nullptr)
    {
        cout << p->data << endl;

        recursive_display(p->next);
    }
}

void reverse_recursive_display(Node *p)
{
    if (p != nullptr)
    {
        reverse_recursive_display(p->next);
        cout << p->data << endl;
    }
}

int counting_nodes(Node *p)
{
    int c = 0;
    while (p != nullptr)
    {
        c++;
        p = p->next;
    }

    return c;
}

int recursive_count_nodes(Node *p)
{
    if (p == nullptr)
    {
        return 0;
    }

    return 1 + recursive_count_nodes(p->next);
}

int sum_of_all_element(Node *p)
{
    if (p == nullptr)
    {
        return 0;
    }

    return p->data + sum_of_all_element(p->next);
}

int max_element(Node *p)
{
    if (p == nullptr)
    {
        return INT_MIN;
    }

    int max = max_element(p->next);

    return p->data > max ? p->data : max;
}

Node *search(Node *p, int n)
{
    while (p != nullptr)
    {
        if (p->data == n)
        {
            cout << "found" << endl;
            return p;
        }
        p = p->next;
    }

    cout << "not found" << endl;
    return nullptr;
}

int main()
{

    vector<int> a = {10, 20, 30, 40, 50};

    Node *head = Node::form_linked_list(a);
    // head->display_node();

    // recursive_display(head);

    // cout << counting_nodes(head) << endl;
    // cout << recursive_count_nodes(head) << endl;

    // reverse_recursive_display(head);

    // cout << sum_of_all_element(head) << endl;
    // cout << max_element(head) << endl;
    Node *found = search(head, 100);

    if (found != nullptr)
    {
        cout << found->data << endl;
    }
    return 0;
}