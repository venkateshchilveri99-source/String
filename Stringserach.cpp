#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char names[5][30];
    char search[30];
    int i, found = 0;

    cout << "Enter 5 names:" << endl;

    for(i = 0; i < 5; i++)
    {
        cout << "Enter name " << i + 1 << ": ";
        cin >> names[i];
    }

    cout << "\nEnter name to search: ";
    cin >> search;

    for(i = 0; i < 5; i++)
    {
        if(strcmp(names[i], search) == 0)
        {
            found = 1;
            cout << "Name found at position " << i + 1 << endl;
            break;
        }
    }

    if(found == 0)
    {
        cout << "Name not found." << endl;
    }

    return 0;
}