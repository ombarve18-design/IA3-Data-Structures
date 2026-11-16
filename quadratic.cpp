#include <iostream>
using namespace std;

int main()
{
    int table[11];

    for (int i = 0; i < 11; i++)
    {
        table[i] = -1;
    }

    int mango[11] = {
        25, 15, 10, 5, 11, 19,
        16, 36, 42, 28, 32
    };

    for (int i = 0; i < 11; i++)
    {
        int key = mango[i];
        int index;
        int flag = 0;

        for (int j = 0; j < 11; j++)
        {
            index = (key % 11 + j * j) % 11;

            if (table[index] == -1)
            {
                table[index] = key;
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << "Cannot insert " << key << endl;
        }
    }

    cout << "\nHash Table using Quadratic Probing:\n";

    for (int i = 0; i < 11; i++)
    {
        cout << i << " : ";

        if (table[i] == -1)
            cout << "Empty";
        else
            cout << table[i];

        cout << endl;
    }

    return 0;
}