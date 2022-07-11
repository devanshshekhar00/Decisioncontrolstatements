#include<stdio.h>
int main()
{
   int input;
   printf("Enter an input\n");
   scanf("%d",&input);
   if(input >= 100 && input <=999)
   {
       printf("Number is 3 digit");
   }
   else
   {
       printf("Number is not 3 digit");
   }
   
}
