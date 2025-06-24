//42. Verificar si un número es un número armstrong de 3 dígitos (ej. 153).

#include <stdio.h>
#include <math.h>

int verifie_armstrong(int input_number);

int main()
{
    int num;

    printf("Insert your number: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 999)
    {
        if (verifie_armstrong(num))
        {
            printf("Your number is an armstrong.\n");
        }
        else {
            printf("Your number is not an armstrong.\n");
        }
    }
    else {
        printf("Invalid Input.\n");
    }
    
    return 0;
}

int verifie_armstrong(int input_number)
{
    int dig1, dig2, dig3;

    //Separe each digit of the input number.
    dig1 = input_number % 10;
    dig2 = (input_number / 10) % 10;
    dig3 = input_number / 100;

    //Verifie if input number is an armstrong.
    if (pow(dig1, 3) + pow(dig2, 3) + pow(dig3, 3) == input_number)
    {
        return 1;
    }

    return 0;
}