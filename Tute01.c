/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,total=0;
  float average;

  printf("Enter mark1: ");
  scanf("%d",&mark1);
  printf("Enter mark2: ");
  scanf("%d",&mark2);

  total= mark1 + mark2;
  average=total/2;

  printf("average=%.2f",average);

  
  return 0;
}

