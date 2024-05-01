#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double x, w, l, h;
    cin >> x >> w >> l >> h;
    double v = w * l * h;
    double wind_weight = x * 1000 * v;
    cout << fixed << setprecision (2);
    cout << wind_weight << " kg";
    return 0;
}
