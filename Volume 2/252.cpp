#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int M, N, D, P, Q, T;
    cin >> M >> N >> D >> P >> Q >> T;
    int total_room = M * N;
    int day_taken = total_room * D;
    long long int total_person_charge = (long long int)T * P;
    long long int total_charge = total_person_charge * day_taken;
    cout << "Person\t: " << P << endl;
    cout << "Days\t: " << day_taken << " Days" << endl;
    cout << "Charge\t: " << total_charge << " Taka" << endl;
    day_taken = (P * day_taken) / (P + Q);
    total_person_charge = (long long int)T * (P + Q);
    total_charge = total_person_charge * day_taken;
    cout << endl;
    cout << "Person\t: " << P+Q << endl;
    cout << "Days\t: " << day_taken << " Days" << endl;
    cout << "Charge\t: " << total_charge << " Taka" << endl;
    return 0;
}
