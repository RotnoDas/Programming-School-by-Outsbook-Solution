#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int L;
    cin >> L;
    int W = ((double)6 / 10) * L;
    int R = L / 5;
    double X = L * ((double)9 / 20);
    double Y = (double)W / 2;
    cout << "L = " << L << endl;
    cout << "W = " << W << endl;
    cout << "R = " << R << endl;
    cout << fixed << setprecision(1);
    cout << "(X, Y) = " << "(" << X << ", " << Y << ")" << endl;
    return 0;
}
