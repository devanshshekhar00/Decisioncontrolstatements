// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int month;
    printf("Enter month number\t");
    scanf("%d",&month);
    if(month<=7&& month >0)
    {
        if(month==2)
        {
            printf("28 days");
        }
        else 
        {
            if(month%2==0)
            {
                printf("30 days");
            }
            else 
            {
                printf("31 days");
            }
        }
    }
    else if(month>7 && month<=12)
    {
        if(month%2==0)
            {
                printf("31 days");
            }
            else 
            {
                printf("30 days");
            }
    }
}
