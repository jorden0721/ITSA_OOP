#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, sum = 0;

    cin >> a;

    for(int i = a;i >= 0;i--)
    {
        if(i % 3 == 0)
            sum += i;
    }
    cout << sum << endl;
    
    return 0;
}