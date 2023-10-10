// WAP to calculate the area and perimeter of a rectangle

#include<stdio.h>
void main()
{
  int A ,P, l,b;
  printf("Enter the values of length and breadth");
  scanf("%d %d",l,b);
  A= l*b;
  P= 2*(l+b);
  printf("The area of the rectangle is %d and Perimeter of the rectangle is %d",A,P);
}
