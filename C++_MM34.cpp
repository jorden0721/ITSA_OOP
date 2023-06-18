#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, i;

    cin >> n;

    for(int i = 1;i <= n;i++)
    {
        if(n % i == 0)
        {
            if(i == 1)
                cout << i;
            else
                cout << ' ' << i;
        }
    }
    cout << endl;
    
    return 0;
}