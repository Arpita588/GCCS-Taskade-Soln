// Write a program to check whether the given number is prime or not.

#include <stdio.h>

int main()
{
  int n , count = 0 , i ;
  printf("Enter any number:") ;
  scanf("%d",&n) ;
  for (i=1;i<=n;i++)
    {
      if(n%i==0)
      {
        count++ ;
      }
    }
  if (count==2)
  printf("The number is prime ") ;
  else
  printf(" The number is not prime");
  return 0;
}
