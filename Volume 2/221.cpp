#include <iostream>
using namespace std;
int main ()
{
    int M, P, C, D;
    cin >> M >> P >> C >> D;
    int days = (D + P * C) / (M - P);
    cout << days << " " << M * days;
    return 0;
}
