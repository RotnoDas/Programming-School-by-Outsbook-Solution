#include <iostream>
using namespace std;
int main ()
{
    int X, X1, X2;
    cin >> X >> X1 >> X2;
    int rimi = (X - 2 * X1 - X2) / 3;
    cout << "Proma " << rimi + X1 << ", Rimi " << rimi << ", Monisha " << rimi + X1 + X2;
    return 0;
}
