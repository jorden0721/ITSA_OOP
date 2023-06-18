#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, c;
    double ans=0;

    cin >> a >> b >> c;

    ans = (a+b)*c;
    ans /= 2;

    cout << fixed << setprecision(1) << "Trapezoid area:" <<  ans << endl;

    return 0;
}