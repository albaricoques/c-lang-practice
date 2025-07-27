#include <stdio.h>

void turn_back_number(int number);

int main()
{
    int num;

    printf("Insert your number: ");
    scanf("%d", &num);

    printf("Number reversed: ");
    turn_back_number(num);

    printf("\n");
    return 0;
}

void turn_back_number(int number)
{
    if (number == 0) {
        printf("0");
        return;
    }

    if (number < 0) {
        printf("-");
        number = -number;
    }

    while (number > 0) 
    {
        int digit = number % 10;
        printf("%d", digit);
        number /= 10;
    }
}