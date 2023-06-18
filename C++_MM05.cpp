#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a;

    cin >> a;
    a = (int)(a * a * 10 + 0.5) / 10.0;
    cout << fixed << setprecision(1) << a << endl;

    return 0;
}