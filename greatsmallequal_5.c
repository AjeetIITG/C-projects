#include <stdio.h>

int main(){
    int a, b;
    printf("Enter the two numbers:");
    scanf("%d", &a);
    scanf("%d", &b);
    if(a>b)
    {
        printf("The number %d is Greater than %d.", a, b);
    }
    else if(a <b)
    {
        printf("The number %d is Smaller than %d.", a, b);
    }
    else
    {
        printf("The numbers are equal.");
    }
    return 0;
}