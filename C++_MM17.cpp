#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, tmp;

    cin >> a >> b;

    //檢查大小
    if(b > a)
    {
        tmp = a;
        a = b;
        b = tmp;
    }

    for(int i = b;i >= 1;i--)
    {
        if(a % i ==0 && b % i ==0)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}