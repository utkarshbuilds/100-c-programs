/*
Program: Swap two numbers without using third(temporary) variable.
Description: Takes two numbers as input and swap the values of them without using third variable.
Author: Utkarsh Raj
*/

#include <stdio.h>

int main()
{
  // Variable Declaration
  int num1, num2;

  // -------- Input Section --------
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  printf("Before Swapping: %d %d\n", num1, num2);

  // -------- Processing Section --------
  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;

  // -------- Output Section --------
  printf("After Swapping: %d %d\n", num1, num2);

  return 0;
}
