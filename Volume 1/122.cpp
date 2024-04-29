#include <iostream>
#define month 12
using namespace std;
int main ()
{
    int T, X, Y;
    cin >> T >> X >> Y;
    int save = (T - (X + Y)) * month;
    cout << save <<" Taka";
    return 0;
}
