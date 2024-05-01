#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int M, N;
    cin >> M >> N;
    int remain = M - N;
    long long int total = remain * (long long int)365;
    cout << total << endl;
    int mod = total % 100;
    cout << mod;
    return 0;
}
