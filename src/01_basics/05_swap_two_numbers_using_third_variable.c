/*
Program: Swap Two Numbers Using a Third Variable.
Description: Takes two numbers as input and swaps their values using a temporary variable.
Author: Utkarsh Raj
*/

#include <stdio.h>

int main()
{
  // Variable declaration
  int num1, num2, temp;

  // -------- Input Section --------
  printf("Enter two numbers : ");
  scanf("%d %d", &num1, &num2);
 
  printf("Before swapping: %d %d\n", num1, num2);

  // -------- Processing Section --------
  temp = num1;
  num1 = num2;
  num2 = temp;

  // -------- Output Section --------
  printf("After swapping: %d %d.\n", num1, num2);

  return 0;
}
