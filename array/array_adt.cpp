#include <bits/stdc++.h>

using namespace std;

class Array
{

public:
    int *arr;
    int length;
    int size;

    Array(int size)
    {
        arr = new int[size];
        length = 0;
        size = size;
    }

    ~Array()
    {
        delete[] arr;
    }

    void push(int num)
    {
        arr[length] = num;
        length++;
    }

    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << arr[i] << endl;
        }
    }

    void insert(int index, int value)
    {
        for (int i = length-1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = value;
        length++;
    }
};

int main()
{

    Array a1(10);

    a1.push(4);
    a1.push(3);
    a1.push(5);
    a1.push(2);

    a1.insert(0, 0);
    // a1.insert(1, 2);

    a1.insert(2, 10);
    a1.display();

    // a1.delete(0);

    // a1.dislay();

    // a1.search(4);

    return 0;
}