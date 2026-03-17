/* 
Program: Sum of two numbers.
Description: Takes two integers as input and prints their sum.
Author: Utkarsh Raj
*/

#include <stdio.h>

int main()
{
  // Variable declaration
  int num1, num2, sum=0;

  // -------- Input Section --------
  printf("Enter two number : \n");
  scanf("%d %d", &a, &b);

  // -------- Processing Section --------
  sum = a + b;

  // -------- Output Section --------
  printf("%d\n", sum);

  return 0;
}
