#include<stdio.h>
int main()
{
    printf("Enter a number\n");
    int input;
    scanf("%d",&input);
    if(input>0)
    {
        printf("positive");
    }
    else 
    {
        printf("non-positive");
    }
}
