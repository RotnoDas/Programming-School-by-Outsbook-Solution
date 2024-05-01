#include <bits/stdc++.h>
using namespace std;
int main ()
{
    float T;
    cin >> T;
    int taka = (int)T;
    cout << taka << " Taka ";
    float paisa = T - taka;
    cout << fixed << setprecision(0);
    cout << paisa * 100 << " Paisa ";
    return 0;
}
