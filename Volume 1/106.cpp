#include <iostream>
using namespace std;
int main ()
{
    int X, M, Y;
    cin >> X >> M >> Y;
    int days = (M * X) / (Y + X);
    cout << days << endl;
    return 0;
}
