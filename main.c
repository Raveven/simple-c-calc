#include <stdio.h>

int main(void) {

   char sign;
   int num1;
   int num2;
   float result;
   
   printf("Choose an operator(+, -, *, /) to perform the operation in C Calculator:");
   scanf("%c", &sign);
   //printf("%c\n", sign);
   
   if (sign == '+') {
      printf("You have selected: Addition\n");
      printf("Enter the first number: ");
      scanf("%d", &num1);
      //printf("%d\n", num1);
      printf("Enter the second number: ");
      scanf("%d", &num2);
      //printf("%d\n", num2);
      result = num1 + num2;
      printf("Addition of %d and %d is: %.2f\n", num1, num2, result);
   }
   if (sign == '-') {
      printf("You have selected: Subtraction\n");
      printf("Enter the first number: ");
      scanf("%d", &num1);
      //printf("%d\n", num1);
      printf("Enter the second number: ");
      scanf("%d", &num2);
      //printf("%d\n", num2);
      result = num1 - num2;
      printf("Subtraction of %d and %d is: %.2f\n", num1, num2, result);
   }
   if (sign == '*') {
      printf("You have selected: Multiplication\n");
      printf("Enter the first number: ");
      scanf("%d", &num1);
      //printf("%d\n", num1);
      printf("Enter the second number: ");
      scanf("%d", &num2);
      //printf("%d\n", num2);
      result = num1 * num2;
      printf("Multiplication of %d and %d is: %.2f\n", num1, num2, result);
   }
   if (sign == '/') {
      printf("You have selected: Division\n");
      printf("Enter the first number: ");
      scanf("%d", &num1);
      //printf("%d\n", num1);
      printf("Enter the second number: ");
      scanf("%d", &num2);
     // printf("%d\n", num2);
      result = num1 / num2;
      printf("Division of %d and %d is: %.2f\n", num1, num2, result);
   }
   
   
   return 0;
}