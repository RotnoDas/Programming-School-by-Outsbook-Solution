#include <iostream>
#include <iomanip>
#define PI 3.1416
using namespace std;
int main ()
{
    float l, d;
    cin >> l >> d;
    float p = d / l;
    float r = p / (2 * PI);
    cout << fixed << setprecision (2);
    cout << r << " km";
    return 0;
}
