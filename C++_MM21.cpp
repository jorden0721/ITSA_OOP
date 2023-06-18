#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long long int a, ans = 1;

    cin >> a;

    for(int i = a;i > 0;i--)
    {
        ans = ans * i;
    }
    cout << ans << endl;
    
    return 0;
}