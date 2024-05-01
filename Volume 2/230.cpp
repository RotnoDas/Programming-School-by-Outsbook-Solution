#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    float X, Y, T;
    cin >> X >> Y >> T;
    float ac = (Y - X) / T;
    float dis = ((X + Y) / 2) * T;
    cout << fixed << setprecision(1);
    cout << ac << endl;
    cout << dis << endl;
    return 0;
}
