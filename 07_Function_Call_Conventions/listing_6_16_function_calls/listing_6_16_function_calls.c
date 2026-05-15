#include <stdio.h>

int test(int x, int y, int z)
{
    return x + y + z;
}

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int ret;

    ret = test(a, b, c);

    printf("ret = %d\n", ret);

    return 0;
}