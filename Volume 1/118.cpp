#include <iostream>
using namespace std;
int main ()
{
    int P, X;
    cin >> P >> X;
    cout << X / (1 + (P / (double)100));
    return 0;
}
