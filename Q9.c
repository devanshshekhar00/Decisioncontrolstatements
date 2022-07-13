
#include <stdio.h>

int main() {
    int num1,num2,num3;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);
    printf("Enter the third number\n");
    scanf("%d",&num3);
    if(num1>num2 || num1 == num2)
    {
        if(num1 == num3 || num1>num3)
        {
            printf("%d",num1);
        }
        else 
        {
            printf("%d",num3);
        }
    }else 
    {
        if(num2 == num3 || num2>num3)
        {
            printf("%d",num2);
        }
        else 
        {
            printf("%d",num3);
        }
        
    }
    
    return 0;
}
