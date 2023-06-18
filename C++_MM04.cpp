#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, tmp;

    cin >> a >> b;

    cout << a << '+' << b << '=' << a + b << endl;
    cout << a << '*' << b << '=' << a * b << endl;
    cout << a << '-' << b << '=' << a - b << endl;

    tmp = a % b;
    //餘數可能是負數
    if(tmp < 0)
        // a/b=ans...ans
        cout << a << '/' << b << '=' << a / b - 1 << "..." << tmp + b << endl;
    else
        cout << a << '/' << b << '=' << a / b << "..." << tmp << endl;
    
    return 0;
}