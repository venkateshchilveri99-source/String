#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char names[5][30];
    int i, max = 0;

    cout << "Enter 5 names:" << endl;

    for(i = 0; i < 5; i++)
    {
        cout << "Enter name " << i + 1 << ": ";
        cin >> names[i];
    }

    cout << "\nAll Names:" << endl;

    for(i = 0; i < 5; i++)
    {
        cout << i + 1 << ". " << names[i] << endl;
    }

    for(i = 1; i < 5; i++)
    {
        if(strlen(names[i]) > strlen(names[max]))
        {
            max = i;
        }
    }

    cout << "\nLongest Name: " << names[max];
    cout << "\nLength: " << strlen(names[max]);

    return 0;
}