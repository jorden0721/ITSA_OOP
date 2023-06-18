#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, i;

    cin >> n;

    if(n % 4 == 0)
    {
        if(n % 100 == 0)
        {
            if(n % 400 == 0)
                cout << "Bissextile Year" << endl;
            else
                cout << "Common Year" << endl;
            return 0;
        }
        cout << "Bissextile Year" << endl;
    }
    else
        cout << "Common Year" << endl;
    
    return 0;
}