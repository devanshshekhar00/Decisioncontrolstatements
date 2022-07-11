#include<stdio.h>
int main()
{
   int input;
   printf("Enter an input\n");
   scanf("%d",&input);
   int x = input/2;
   if(x*2 == input)
   {
       printf("Number is even");
   }
   else
   {
       printf("Number is not even");
   }
   
}
