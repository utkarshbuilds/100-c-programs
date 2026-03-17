/*
Program: Sum three numbers
Description: Takes three integers as input and prints their sum.
Author: Utkarsh Raj
*/

#include <stdio.h>

int main()
{
  // Variable declarations
  int num1, num2, num3, sum = 0;

  // -------- Input Section --------
  printf("Enter three integers: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  // -------- Processing Section --------
  sum = num1 + num2 + num3;

  // -------- Output Section --------
  printf("Sum = %d", sum);

  return 0;
}
