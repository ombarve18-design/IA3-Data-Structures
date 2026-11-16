#include <iostream>
#include <string>
using namespace std;

int main()
{
    int table[6];
    string flavour[6];

    for (int i = 0; i < 6; i++)
    {
        table[i] = -1;
    }

    int key;
    string name;

    for (int i = 0; i < 6; i++)
    {
        cout << "Enter flavour name: ";
        cin >> name;

        cout << "Enter key: ";
        cin >> key;

        int index = key % 6;
        int start = index;

        while (table[index] != -1)
        {
            index = (index + 1) % 6;

            if (index == start)
                break;
        }

        if (table[index] == -1)
        {
            table[index] = key;
            flavour[index] = name;
        }
        else
        {
            cout << "Hash table is full!" << endl;
        }
    }

    cout << "\nHash Table:\n";
    cout << "Index\tKey\tFlavour\n";

    for (int i = 0; i < 6; i++)
    {
        cout << i << "\t";

        if (table[i] == -1)
            cout << "Empty";
        else
            cout << table[i] << "\t" << flavour[i];

        cout << endl;
    }

    return 0;
}