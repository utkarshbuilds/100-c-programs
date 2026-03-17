/* 
Program: Sum of two numbers.
Description: Takes two integers as input and prints their sum.
Author: Utkarsh Raj
*/

#include <stdio.h>

int main()
{
  // Variable declaration
  int num1, num2, sum = 0;

  // -------- Input Section --------
  printf("Enter two number: ");
  scanf("%d %d", &num1, &num2);

  // -------- Processing Section --------
  sum = num1 + num2;

  // -------- Output Section --------
  printf("Sum = %d\n", sum);

  return 0;
}
