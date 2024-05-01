#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int S, N;
    cin >> S >> N;
    int x = (S - N) / 4;
    cout << "Priyom: " << x << "Kg." << endl;
    cout << "Priyonti: " << 2 * x << "Kg." << endl;
    cout << "Odry: " << x + N << "Kg." << endl;
    return 0;
}
