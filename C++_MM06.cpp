#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    double ans;

    cin >> a;
    ans = a * 1.6;
    ans = (int)(ans * 10 + 0.5) / 10.0;

    cout << fixed << setprecision(1) << ans << endl;
    
    return 0;
}