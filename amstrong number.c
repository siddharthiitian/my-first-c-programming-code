#include <stdio.h>
int main()
{
    int a = 1;
    while (a <= 999)
    {
        int b = a / 100;
        int c = a / 10;
        int d = c - b * 10;
        int e = a - b * 100 - d * 10;
        if (a == (b * b * b) + (d * d * d) + (e * e * e))
        {
            printf("%d this is a armstrong number \n", a);
        }
        a++;
    }

    return 0;
}
