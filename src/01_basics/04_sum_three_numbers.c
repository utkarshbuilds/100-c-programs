/*
Program: Sum three number
Discription: Take three integer as input and prints their sum
Author: Utkarsh Raj
*/

#include <stdio.h>

int main()
{
  // declaring the variables
  int a, b, c, sum=0;

  // taking input from user
  printf("Enter three numbers: \n");
  scanf("%d %d %d", &a, &b, &c);

  // calculating the sum
  sum = a+b+c;

  // printing sum
  printf("%d", sum);

  return 0;
}
