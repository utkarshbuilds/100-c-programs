/* 
Program: Sum
Discription: Take two integers as input and prints their sum
Author: Utkarsh Raj
*/

#include <stdio.h>

int main()
{
  // declaring the varibles
  int a, b, sum=0;

  // taking input from user
  printf("Enter two number : \n");
  scanf("%d %d", &a, &b);

  // calculating sum
  sum = a + b;

  // printing sum
  printf("%d\n", sum);

  return 0;
}
