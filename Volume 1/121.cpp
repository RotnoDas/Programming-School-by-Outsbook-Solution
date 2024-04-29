#include <iostream>
using namespace std;
int main ()
{
    int X1, Q1, R1, X2;
    cin >> X1 >> Q1 >> R1 >> X2;
    int number = X1 * Q1 + R1;
    int Q2 = number / X2;
    int R2 = number % X2;
    cout << Q2 << " " << R2 << endl;
    return 0;
}
