#include<stdio.h>
int main()
{
   int yearInput;
   printf("Enter the year");
   scanf("%d",&yearInput);
   if(yearInput%4==0)
   {
       printf("Leap year");
       
   }
   else 
   {
       printf("Not a leap Year");
       
   }
  
  
}
