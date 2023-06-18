#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int ans = 1, i;
    cin >> i;

    if(i > 31)
        cout << "Value of more than 31" << endl;
    else
    {
        ans = ans << i;
        cout << ans <<endl;
    }

    return 0;
}