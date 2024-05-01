#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int M, E, B;
    cin >> M >> E >> B;
    int fail = (M - B) + (E - B) + B;
    int pass = 100 - fail;
    cout << pass << "%";
    return 0;
}
