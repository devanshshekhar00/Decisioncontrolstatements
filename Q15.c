
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Number is positive");
    }
    else if(num<0)
    {
        printf("Number is negative");

    }
    else 
    {
        printf("Number is 0");
        
    }
   
    

        
    return 0;
}
