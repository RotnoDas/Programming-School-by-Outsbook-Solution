#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, m, t;
    cin >> n >> m >> t;
    int men_per_group = n / m;
    int ending_number = t * men_per_group;
    int starting_number = ending_number - men_per_group + 1;
    cout << starting_number << " " << ending_number;
    return 0;
}
