#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int m;
    cin >> m;
    double value = pow((m + ((double)1 / m)), 4);
    cout << fixed << setprecision(3) << value;
    return 0;
}
