#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int l, m, n, o, s;
    cin >> l >> m >> n >> o >> s;
    int sum = l + m + n + o;
    int diff = sum - s;
    int x = diff / 4;
    cout << "x = " << x << endl;
    int a = l - x;
    cout << "l = " << a << endl;
    int b = m - x;
    cout << "m = " << b << endl;
    int c = n - x;
    cout << "n = " << c << endl;
    int d = o - x;
    cout << "o = " << d << endl;
    return 0;
}
