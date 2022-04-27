    // C Program to Calculate Simple Operations

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    float num1,num2;

    printf("Choose the operator(+ - * /): \n");
    scanf("%c", &operator);


    printf("\nEnter the two operands : \n");
    scanf("%f %f", &num1, &num2);


    switch(operator) {

    case '+':
    printf("\n%.2f + %.2f = %.2f",num1, num2,  num1+num2);
    break;

    case '-':
    printf("\n%.2f - %.2f = %.2f",num1, num2, num1-num2);
    break;

    case '*':
    printf("\n%.2f * %.2f = %.2f",num1, num2, num1*num2);
    break;

   case '/':
   printf("\n%.2f / %.2f = %.2f",num1, num2, num1/num2);
   break;

   default:
   printf("\nERROR: Unsupported Operation");

   }
    return 0;
}