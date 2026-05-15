#include <stdio.h>

int main()
{
    int i = 2;

    switch(i)
    {
        case 1:
            printf("i = %d", i + 1);
            break;

        case 2:
            printf("i = %d", i + 2);
            break;

        case 3:
            printf("i = %d", i + 3);
            break;

        default:
            break;
    }

    return 0;
}