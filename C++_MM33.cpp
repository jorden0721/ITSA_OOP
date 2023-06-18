#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, i, j, sum;
    cin >> n;

    for(i = 6;i <= n;i+=2)
    {
        sum = 0;
        for(j = 1;j < i;j++)
        {
            if(i % j == 0)
                sum += j;
        }
        if(sum == i)
        {
            if(i == 6)
                cout << i;
            else
                cout << ' ' << i;
        }
    }
    cout << endl;
    
    return 0;
}