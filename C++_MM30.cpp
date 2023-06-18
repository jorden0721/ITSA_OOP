#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, flag = 1;

    cin >> a;

    for(int i = 2;i < a;i++)
    {
        if(a % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}