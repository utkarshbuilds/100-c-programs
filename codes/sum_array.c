// This program demonstarte how to sum the element of array

#include <stdio.h>

//specifing the size of array
#define SIZE 5

int main()
{
  // declaring the array
  int n[SIZE];
  int sum=0;

// populating the array using for loop
for(int i=0; i<SIZE; i++)
{
  scanf("%d", &n[i]);
  sum += n[i];
}

// printing the sum of array
printf("d", sum);

return 0;
}
