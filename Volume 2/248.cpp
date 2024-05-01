#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int P, n, r;
    cin >> P >> n >> r;
    double interest = P * (r / (double)100);
    double total_interest = interest * n;
    cout << fixed << setprecision(2);
    cout << total_interest << endl;
    return 0;
}
