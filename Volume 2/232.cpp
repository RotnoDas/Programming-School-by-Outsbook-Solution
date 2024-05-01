#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int addition, n;
    cin >> addition >> n;
    int x = (addition + n) / 2;
    int y = addition - x;
    double div = (double)x / y;
    cout << fixed << setprecision(2);
    cout << div << endl;
    double mul = x * y;
    cout << fixed << setprecision(2);
    cout << mul << endl;
    return 0;
}
