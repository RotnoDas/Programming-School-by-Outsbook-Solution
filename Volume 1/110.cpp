#include <iostream>
#define batsman 6
#define bowler 4
#define total 10
using namespace std;
int main ()
{
    int R1, R2;
    cin >> R1 >> R2;
    int avg = ((R1 * batsman) + (R2 * bowler)) / total;
    cout << avg;
    return 0;
}
