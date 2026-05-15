#include <stdio.h>

int b[5] = {123,87,487,-7,978};

int main()
{
    int i;
    int a[5];

    for(i = 0; i < 5; i++)
    {
        a[i] = i;
        b[i] = i;
    }

    return 0;
}