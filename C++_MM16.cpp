#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;

    double tmp = 0;
    tmp = x * x + y * y;

    if(tmp <= 20000)
        cout << "inside" << endl;
    else
        cout << "outside" << endl;

    return 0;
}