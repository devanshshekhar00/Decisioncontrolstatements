#include<stdio.h>
int main()
{
    printf("Enter a number\n");
    int k;
    scanf("%d",&k);
    if(k%5==0)
    {
        printf("Divisible by 5");
    }
    else 
    {
        printf("Not divisible by 5");
    }
}
