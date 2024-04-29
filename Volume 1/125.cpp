#include <iostream>
using namespace std;
int main ()
{
    int S1, D1, D2, S2;
    cin >> S1 >> D1 >> D2 >> S2;
    int remain_days = D1 - D2;
    int days = (S1 * (D1 - D2)) / (S1 + S2);
    cout << days << " days";
    return 0;
}
