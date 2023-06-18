#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double c, ans;

    cin >> c;

    ans = c * 9 / 5 + 32;
    ans = (int)(ans * 10 + 0.5) / 10.0;

    cout << fixed << setprecision(1) << ans << endl;
    
    return 0;
}