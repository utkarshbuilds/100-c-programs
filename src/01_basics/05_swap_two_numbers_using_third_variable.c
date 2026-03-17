/*
Program: Swap Two Numbers Using a Third Variable
Description: Takes two numbers as input and swaps their values using a temporary variable.
Author: Utkarsh Raj
*/

#include <stdio.h>

int main()
{
  // declaring variable num1, num2, and temporary(temp)
  int num1, num2, temp;

  // taking user's input
  printf("Enter two numbers : ");
  scanf("%d %d", &num1, &num2);

  // swaping the numbers
  temp = num1;
  num1 = num2;
  num2 = temp;

  // printing the swapped numbers
  printf("Swapped number are %d and %d.\n ", num1, num2);

  return 0;
}
