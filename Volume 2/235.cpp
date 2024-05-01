#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin >> a;
    int x = pow(a, 2);
    int temp = x;
    int sum = 0;
    while (x != 0)
    {
        int digit = x % 10;
        sum = sum + digit;
        x = x / 10;
    }
    int y = pow(sum, 2);
    int sub = temp - y;
    int z = pow(sub, 2);
    cout << z % 10;
    return 0;
}
