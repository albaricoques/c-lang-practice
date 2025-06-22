//39. Contar cuántos múltiplos de 7 hay entre 1 y N.

#include <stdio.h>

int counting_multipliers(int input_number);

int main()
{
    int num;

    printf("Insert your number: ");
    scanf("%d", &num);

    int output = counting_multipliers(num);

    printf("Multiplies of 7 between 1 and %d: %d\n", num, output);

    return 0;
}

int counting_multipliers(int input_number)
{
    int seven_multiplier = 0;

    for (int i = 1; i <= input_number; i++)
    {
        if (i % 7 == 0)
        {
            seven_multiplier++;
        }
    }
    
    return seven_multiplier;
}