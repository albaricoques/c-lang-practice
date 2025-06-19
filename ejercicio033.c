//33. Determinar si un número es primo (usando optimización hasta raíz cuadrada).

#include <stdio.h>
#include <math.h>

int isPrime(int number);

int main()
{
    int num;
    printf("Insert a number: ");
    scanf("%d", &num);

    if (isPrime(num) == 1)
    {
        printf("Your number is prime.\n");
    }
    else {
        printf("Your number is not prime.\n");
    }
    return 0;
}

int isPrime(int number)
{
    int sqrtNum = sqrt(number);
    
    for (int i = 2; i <= sqrtNum; i++)
    {
        if (number % i == 0)
        {
            return 0; 
        }
    }
    return 1;
}