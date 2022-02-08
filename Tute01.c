/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float sub1, sub2, total, average;
  printf("Enter the marks of first subject = ");
  scanf("%f", &sub1);
  printf("Enter the marks of second subject = ");
  scanf("%f", &sub2);
  //Calculations
  total = sub1 + sub2;
  average = total / 2.0;
  printf("Average marks = %.2f",average);
  return 0;
}

