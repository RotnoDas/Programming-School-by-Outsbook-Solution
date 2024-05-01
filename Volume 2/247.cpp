#include <bits/stdc++.h>
using namespace std;
int main ()
{
    double N, P, M;
    cin >> N >> P >> M;
    double Sc = (N + (M * P)) / (2 * P);
    double St = Sc - M;
    cout << St << " " << Sc;
    return 0;
}
