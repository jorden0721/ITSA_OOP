#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;

    cin >> a;

    if(a < 35)
    {
        cout << endl;
        return 0;
    }
    cout << 35;
    for(int i = 70; i <= a;i += 35)
    {
        cout << ' ' << i;
    }
    cout << endl;
    
    return 0;
}