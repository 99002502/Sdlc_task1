#include <calculator_operations.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}
int factorial(int operand1)
{
  /* Return -1 for negative numbers */
  if(operand1 < 0)
    return -1;

  /* Return 1 for 0 */
  if(operand1 == 0)
    return 1;

  /* Recursively calculate Factorial of the number */
  return operand1 * factorial(operand1-1);
}
int reverse(int operand1)
{
    /* Find number of digits in num */
    int digit = (int)log10(operand1);
    
    /* Recursion base condition */
    if(operand1 == 0)
        return 0;

    return ((operand1%10 * pow(10, digit)) + reverse(operand1/10));
}
int armstrong(int operand1)
{
    if(operand1)
    return ((operand1%10)*(operand1%10)*(operand1%10)) + armstrong(operand1/10);
}
    
