#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *table[20];

    for (int i = 0; i < 20; i++)
    {
        table[i] = NULL;
    }

    int marks[20] = {
        33, 56, 78, 12, 10,
        67, 89, 99, 100, 23,
        45, 71, 39, 62, 59,
        90, 91, 20, 75, 66
    };

    for (int i = 0; i < 20; i++)
    {
        int index = marks[i] % 20;

        Node *newNode = new Node;
        newNode->data = marks[i];
        newNode->next = NULL;

        if (table[index] == NULL)
        {
            table[index] = newNode;
        }
        else
        {
            Node *temp = table[index];

            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }

    cout << "Hash Table using Separate Chaining:\n";

    for (int i = 0; i < 20; i++)
    {
        cout << i << " : ";

        Node *temp = table[i];

        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    return 0;
}