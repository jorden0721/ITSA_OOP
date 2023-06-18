#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b;
    double money = 0;

    cin >> a >> b;

    if(a <= 60)
        money = a * b;
    else if(a > 60 && a <= 120)
        money = 60 * b + (a - 60) * b * 1.33;
    else
        money = 60 * b + 60 * b * 1.33 + (a - 120) * b * 1.66;

    money = (int)(money * 10 + 0.5) / 10.0;

    cout << fixed << setprecision(1) << money << endl;
    
    return 0;
}