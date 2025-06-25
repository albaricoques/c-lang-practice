//43. Leer una fecha (dd mm aaaa) y verificar si es válida.

#include <stdio.h>

int verifie_date(int dd, int mm, int yyyy);

int main()
{
    int day, month, year;

    printf("Insert your date (dd mm aaaa): ");
    scanf("%d %d %d", &day, &month, &year);

    if (verifie_date(day, month, year))
    {
        printf("Valid date.\n");
    }
    else {
        printf("Invalid date.\n");
    }
    return 0;
}

int verifie_date(int dd, int mm, int yyyy)
{
    if (dd < 1 || dd > 31 || mm < 1 || mm > 12 || yyyy <= 0)
    {
        return 0;
    }

    int  is_leap = (yyyy % 4 == 0 && (yyyy % 100 != 0 || yyyy % 400 == 0));

    if (mm == 2)
    {
        if (is_leap && dd <= 29)
            return 1;
        else if (!is_leap && dd <= 28)
            return 1;
        else
            return 0;
    }

    if ((mm == 4 || mm == 6 || mm == 9 || mm == 11) && dd <= 30)
        return 1;

    if ((mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) && dd <= 31)
        return 1;

    return 0;
}