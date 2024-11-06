#include <stdio.h>

void main(){
    int m;
    printf("Enter marks obtained");
    scanf("%d", &m);
    if(m >= 75)
    printf("Distinction");
    
    else if(m >= 60)
    
    printf("Grade A");
 
   
    else if(m >= 50)
    printf("Grade B");
    
    else if(m >= 40)
    printf("Grade C");
   
    else 
    printf("Fail");
    
    
}