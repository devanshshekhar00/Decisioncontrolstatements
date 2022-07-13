// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    printf("Enter the number\t");
    scanf("%d",&num);
    if(num%7 == 0 || num%3==0)
    {
        printf("Divisible by  7 or 3");
    }
    else 
    {
        printf("Not Divisible by both 7 and 3");
    }
    

        
    return 0;
}
