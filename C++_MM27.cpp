#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, tmp, sum = 0;

    cin >> a >> b;

    //let b > a
    if(a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }

    for(int i = a;i <= b;i++)
    {
        sum  += i;
    }
    cout << sum << endl;
    
    return 0;
}