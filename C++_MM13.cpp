#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int h1, h2, m1, m2, time, sum = 0;

    cin >> h1 >> m1 >> h2 >> m2;
    time = 60*(h2 - h1) + (m2 - m1);

    if(time <= 120 && time >= 30)
        sum = (time / 30) * 30;
    else if(time <= 120 && time <= 240)
        sum = ((time - 120) / 30) * 40 + 120;
    else if(time > 240)
        sum = ((time - 240) / 30) * 60 + 280;
    
    cout << sum << endl;

    return 0;
}