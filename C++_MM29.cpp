#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, i, j, flag = 1;

    cin >> a;

    for(int i = a-1;i >= 2;i--)
    {
        flag = 1;
        for(j = 2;j < i;j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}