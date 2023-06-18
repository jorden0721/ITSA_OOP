#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;

    cin >> a;

    cout << setiosflags(ios::uppercase) << hex << a << endl;
    
    return 0;
}