#include <stdio.h>

int main()
{
    int i, t1 = 0, t2 = 1, nextTerm;

    for (i = 1; i <= 46; ++i)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("%d, ", t1);
    }
    return 0;
}