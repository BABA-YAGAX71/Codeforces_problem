
#include <iostream>
using namespace std;

int main()
{
    string n;
    char u;
    bool c = true;
    cin >> n;

    for(int i = 1; i < n.length(); i++)
    {
        if(islower(n[i]))
        {
            c = false;
        }
    }

    if(c == true)
    {
        for(int j = 0; j < n.length(); j++)
        {
            if(islower(n[j]))
                u = toupper(n[j]);
            else
                u = tolower(n[j]);
            cout << u;
        }
    }
    else
        cout << n;
    return 0;
}