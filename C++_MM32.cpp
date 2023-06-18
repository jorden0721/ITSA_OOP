#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;

    cin >> a;

    int h, t, d, sum = 0;
    h = a/100;
    t = (a%100)/10;
    d = a%10;

    sum = h*h*h+t*t*t+d*d*d;
    if(sum == a)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    return 0;
}