#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 1; i <= 30; i++)
    {
        sum += i;
    }

    printf("The sum of the first 30 natural numbers is: %d\n", sum);

    return 0;
}
