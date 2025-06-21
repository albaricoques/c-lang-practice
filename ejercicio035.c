//35. Simular una calculadora básica (+, -, *, /, %) con switch.

int sumNumbers(int a, int b);
int restNumbers(int a, int b);
int multiplyNumbers(int a, int b);
int divideNumbers(int a, int b);
int modNumbers(int a, int b);

#include <stdio.h>

int main()
{
    int num1, num2, result;
    char operator;

    printf("Insert your first number: ");
    scanf("%d", &num1);

    printf("Insert Operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Insert your second number: ");
    scanf("%d", &num2);    

    switch (operator)
    {
    case '+':
        result = sumNumbers(num1, num2);
        printf("%d\n", result);
        break;
    case '-':
        result = restNumbers(num1, num2);
        printf("%d\n", result);
        break;
    case '*':
        result = multiplyNumbers(num1, num2);
        printf("%d\n", result);
        break;
    case '/':
        result = divideNumbers(num1, num2);
        printf("%d\n", result);
        break;
    case '%':
        result = modNumbers(num1, num2);
        printf("%d\n", result);
        break;
    default:
        printf("Invalid oparator.\n");
        break;
    }
    return 0;
}

int sumNumbers(int a, int b)
{
    return a + b;
}

int restNumbers(int a, int b)
{
    return a - b;
}

int multiplyNumbers(int a, int b)
{
    return a * b;
}

int divideNumbers(int a, int b)
{
    return a / b;
}

int modNumbers(int a, int b)
{
    return a % b;
}