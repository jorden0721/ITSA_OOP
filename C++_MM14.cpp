#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, d, h, m, s;

    cin >> a;

    d = a / 86400;
    a %= 86400;
    h = a / 3600;
    a %= 3600;
    m = a / 60;
    s = a % 60;

    cout << d << " days" << endl;
    cout << h << " hours" << endl;
    cout << m << " minutes" << endl;
    cout << s << " seconds" << endl;

    return 0;
}