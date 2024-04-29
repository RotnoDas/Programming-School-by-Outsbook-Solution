#include <stdio.h>
#define book_no 7
int main ()
{
    int X, M;
    scanf ("%d %d", &X, &M);
    int price = (X / 7) * M;
    printf ("%d\n", price);
    return 0;
}
