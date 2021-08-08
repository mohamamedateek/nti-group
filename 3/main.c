#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 2;
    int number_3;
    switch(x)
    {
    case '1'  :
    number_3 = 5;
    break;
    case '2'  :
    number_3 = 6;
    break;
    case '3'  :
    number_3 = 8;
    break;
    default:
    number_3 = 9;
    }
        printf("%d",number_3);

    return 0;
}
