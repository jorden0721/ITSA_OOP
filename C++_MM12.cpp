#include <iostream>
#include <iomanip>

using namespace std;

#define dis 0.238

int main()
{
    int a, ans;

    cin >> a;

    ans = a / dis + 1;
    cout << ans << endl;

    return 0;
}