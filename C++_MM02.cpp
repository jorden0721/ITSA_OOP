#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b;
    double ans = 0;

    cin >> a >> b;
    ans = (a*b)/2.0;

    cout << fixed << setprecision(1) << ans << endl;

    return 0;
}