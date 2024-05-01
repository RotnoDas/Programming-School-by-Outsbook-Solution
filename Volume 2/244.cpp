#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int M, N;
    cin >> M >> N;
    int R = N - M;
    long long int T = (long long int)3 * R;
    cout << M + R + T;
    return 0;
}
