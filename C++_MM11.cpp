#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, nt10, nt5, nt1;

    cin >> a;

    nt10 = a / 10;
    nt5 = (a % 10) / 5;
    nt1 = a % 5;

    cout << "NT10=" << nt10 << endl;
    cout << "NT5=" << nt5 << endl;
    cout << "NT1=" << nt1 << endl;

    return 0;
}