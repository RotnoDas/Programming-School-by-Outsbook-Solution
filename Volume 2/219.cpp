#include <iostream>  // Monkey vs Bamboo
using namespace std;
int main ()
{
    int H, M, N;
    cin >> H >> M >> N;
    int temp = H;
    int minute = 0, utha = 0;
    if (H == M)
    {
        minute++;
    }
    else
    {
        while (true)
        {
            int up_time = H / M;
            minute = minute + up_time;
            int up = M * up_time;
            int down = N * up_time;
            utha = utha + (up - down);
            minute = minute + up_time;
            H = temp - utha;
            if (H == M)
            {
                minute++;
                break;
            }
        }
    }
    cout << minute;
    return 0;
}
