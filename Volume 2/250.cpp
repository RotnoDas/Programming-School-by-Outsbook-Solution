#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long int N, M, L;
    cin >> N >> M >> L;
    long long int total_points = N * (long long int)M + ((N * (long long int)M) * ((double)L / 100));
    cout << total_points << " Points";
    return 0;
}
