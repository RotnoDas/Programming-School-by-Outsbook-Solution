#include <iostream>
#define dozen 12
using namespace std;
int main ()
{
    int D, X, Y;
    cin >> D >> X >> Y;
    cout << (X * Y) / (D * dozen) << " Taka";
    return 0;
}
