#include <iostream>
using namespace std;
int main()
{
    int D, Q;
    cin >> D >> Q;
    int R = D / 3;
    int div = D * Q + R;
    cout << div;
    return 0;
}
