#include <stdio.h>

int main()
{
    int x = 7, y;
    
    y = ++x;
    printf("After pre-increment x = %d, y = %d\n", x, y);

    y = x++;
    printf("After post-increment x = %d, y = %d\n", x, y);

    return 0;
}
