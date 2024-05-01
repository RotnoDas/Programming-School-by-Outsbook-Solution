#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int x = (n - 9) / 6;
    cout << (2 * x + 1) << " " << (2 * x + 2 + 1) << " " << (2 * x + 4 + 1);
    return 0;
}
