#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int x = (n - 12) / 8;
    cout << 2 * x << " " << 2 * x + 2 << " " << 2 * x + 4 << " " << 2 * x + 6;
    return 0;
}
