#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    int n = 6 ;

    srand(time(0));
    n = rand() - RAND_MAX / 5;

    if (n < 6 && n != 0)
    {
        printf("%d is less than 6 and not 0\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else if (n > 6)
    {
        printf("%d is greater than 5 \n", n);
    }

    return 0;
}
