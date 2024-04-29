#include <iostream>
using namespace std;
int main ()
{
    int X, Y;
    cin >> X >> Y;
    cout << ((X - Y) / (double)X) * 100 << "%";
    return 0;
}
