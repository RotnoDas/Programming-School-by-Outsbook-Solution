#include <iostream>
using namespace std;
int main ()
{
    int P, X, Y;
    cin >> P >> X >> Y;
    cout << (X * (P / (double)100)) * Y;
    return 0;
}
