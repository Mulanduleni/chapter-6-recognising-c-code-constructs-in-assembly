#include <stdio.h>

int main()
{
    int x = 0;
    int y = 1;
    int z = 2;

    if(x == y){
        if(z == 0){
            printf("z is zero and x = y.\n");
        }else{
            printf("z is non-zero and x = y.\n");
        }
    }else{
        if(z == 0){
            printf("z zero and x != y.\n");
        }else{
            printf("z non-zero and x != y.\n");
        }
    }

    return 0;
}