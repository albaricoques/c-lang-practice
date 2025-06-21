//36. Verificar si un número es un cuadrado perfecto.

#include <stdio.h>
#include <math.h>

int verifySquare(int decimalNumber);

int main()
{
    int num;
    printf("Insert a number: ");
    scanf("%d", &num);

    if (verifySquare(num) == 1)
    {
        printf("Your number is a perfect square.\n");
    }
    else {
        printf("Your number is not a perfect square.\n");
    }
    return 0;
}

int verifySquare(int decimalNumber)
{
    double root = sqrt(decimalNumber);
    
    if (root == (int)root)
    {
        return 1;
    }
    else {
        return 0;
    }
}