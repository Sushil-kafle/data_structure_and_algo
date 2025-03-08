#ifndef LINKEDLIST_H
#define LINKEDLIST_H

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
};

#endif // LINKEDLIST_H
