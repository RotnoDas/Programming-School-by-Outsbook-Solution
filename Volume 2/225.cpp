#include <iostream>
using namespace std;
int main ()
{
    int D1, D2, T;
    cin >> D1 >> D2 >> T;
    int t = - (D2 * T) / (D1 - D2);
    cout << t * D1;
    return 0;
}
