#include <stdio.h>

int main(){

    int a, b, c, large, small;
    printf("\nEnter three numbers:");
    scanf("%d %d %d", &a, &b, &c);

    small = (a < b ? (a < c ? a : c) : (b < c ? b : c));
    large = (a > b ? (a > c ? a : c) : (b > c ? b : c));

    printf("\nThe smallest number is %d", small);
    printf("\nThe largest number is %d", large);
    return 0;
    
}