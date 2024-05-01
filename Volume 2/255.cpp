#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()
{
    double m, n;
    cin >> m >> n;
    double area = n / m;
    double l = sqrt (area / 3);
    cout << fixed << setprecision (2);
    cout << "The length is " << l << " meter" << endl;
    cout << "The width is " << 3 * l << " meter" << endl;
    return 0;
}
