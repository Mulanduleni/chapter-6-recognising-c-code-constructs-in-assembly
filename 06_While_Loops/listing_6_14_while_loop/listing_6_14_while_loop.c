#include <stdio.h>

int performAction()
{
    return 1;
}

int checkResult(int result)
{
    return result - 1;
}

int main()
{
    int status = 0;
    int result = 0;

    while(status == 0){
        result = performAction();
        status = checkResult(result);
    }

    return 0;
}