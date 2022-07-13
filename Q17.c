// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int s1,s2,s3;
    printf("Enter side 1\n");
    scanf("%d",&s1);
    printf("Enter side 2\n");
    scanf("%d",&s2);
    printf("Enter side 3\n");
    scanf("%d",&s3);
    if(s1+s2>s3&&s1+s3>s2&&s2+s3>s1)
    {
        printf("It is triangle");
    }
    else 
    {
        printf("Not a triangle");
    }
}
