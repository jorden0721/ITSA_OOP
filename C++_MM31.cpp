#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, sum = 0;

    cin >> a;

    for(int i = 1;i <= a;i++)
    {
        if(i % 2 == 0 && i % 3 == 0)
        {
            if(i % 12 != 0)
                sum += i;
        }
    }
    cout << sum << endl;
    
    return 0;
}