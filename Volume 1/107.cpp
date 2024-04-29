#include <iostream>
using namespace std;
int main ()
{
    int X, D1, D2;
    cin >> X >> D1 >> D2;
    int person = (X * D1) / D2;
    cout << (person - X) << endl;
    return 0;
}
