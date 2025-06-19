//34. Verificar si un número pertenece a la serie de Fibonacci.

#include <stdio.h>

int isFibonacci(int inputNum);

int main()
{
    int num;
    printf("Insert a number: ");
    scanf("%d", &num);

    if (isFibonacci(num) == 1)
    {
        printf("Your number is on Fibonacci's sequence.\n");
    }
    else {
        printf("Your number is not on Fibonaccis's sequence.\n");
    }

    return 0;
}

int isFibonacci(int inputNumber)
{
    int a = 0;
    int b = 1;
    int c = a + b;

    if (inputNumber == a || inputNumber == b || inputNumber == c)
    {
        return 1;
    }
    
    while (inputNumber > c)
    {
        a = b;
        b = c;
        c = a + b;

        if (inputNumber == c)
        {
            return 1;
        }
    }
}