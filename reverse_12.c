#include <stdio.h>

int main(){
    int i, reverse = 0, digit;
    printf("Enter the number:");
    scanf("%d", &i);
    do{
    digit = i % 10;
        reverse = reverse * 10 + digit;
        i /= 10;
    } while(i > 0);

    printf("The reversed number is %d\n", reverse);
    
    return 0;
}