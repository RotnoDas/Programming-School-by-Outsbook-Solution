#include <iostream>
#define edge 2
using namespace std;
int main ()
{
    int l, w;
    cin >> l >> w;
    l = l - 2 * edge;
    w = w - 2 * edge;
    cout << l * w;
    return 0;
}
