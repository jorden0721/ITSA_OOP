#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;

    cin >> a;

    for(int i = 7;i >= 0;i--)
    {
        cout << (a >> i & 1);
    }
    cout << endl;
    
    return 0;
}