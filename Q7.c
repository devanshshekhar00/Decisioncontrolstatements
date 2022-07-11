#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter a\n");
  scanf("%d",&a);
  printf("Enter b\n");
  scanf("%d",&b);
  printf("Enter c\n");
  scanf("%d",&c);
  int d = b*b - 4*a*c;
  if(d>0)
  {
      printf("roots are real and distinct");
  }
  else if(d == 0)
  {
      printf("roots are real and equal");
  }
  else 
  {
      printf("roots are imaginary");
  }
  
  
  
}
