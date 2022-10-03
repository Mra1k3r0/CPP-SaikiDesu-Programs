#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int n = 15;

    for(i=1; i<=n; i++)
    {
        for(j=n; j>=1; j--)
        {
            cout << "* ";
        }

        cout << "\n";
    }

    return 0;
}