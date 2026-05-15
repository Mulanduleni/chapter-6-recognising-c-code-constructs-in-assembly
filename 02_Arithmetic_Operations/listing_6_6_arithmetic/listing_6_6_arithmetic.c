#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;

    a = a + 11;
    a = a - b;
    a--;
    b++;

    b = a % 3;

    return 0;
}