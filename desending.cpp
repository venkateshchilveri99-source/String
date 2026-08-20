#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char names[5][20], temp[20];

    cout << "Enter 5 names:\n";

    for(int i = 0; i < 5; i++)
        cin >> names[i];

    // Sort in descending order
    for(int i = 0; i < 4; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(strcmp(names[i], names[j]) < 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    cout << "\nNames in descending order:\n";

    for(int i = 0; i < 5; i++)
        cout << names[i] << endl;

    return 0;
}
