//37. Determinar si dos números tienen el mismo último dígito.

#include <stdio.h>

int verify_last_digits(int a, int b);

int main() 
{   
    int num1, num2;

    printf("Insert your first number: ");
    scanf("%d", &num1);

    printf("Insert your second number: ");
    scanf("%d", &num2);

    if (verify_last_digits(num1, num2))
    {
        printf("The last digits of your numbers are equals.\n");
    }
    else {
        printf("The last digits of your numbers aren't equals.\n");
    }
    return 0;
}

int verify_last_digits(int a, int b)
{
    int lastDig1 = a % 10;

    int lastDig2 = b % 10;

    if (lastDig1 == lastDig2)
    {
        return 1;
    }
    else {
        return 0;
    }   
}