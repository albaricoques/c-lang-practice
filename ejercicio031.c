//31. Leer una hora de entrada y salida (formato 24h), calcular horas trabajadas, incluyendo si sale al día siguiente.

#include <stdio.h>

int validateHour(int hour);
int readEntryHour();
int readExitHour();
int calculateHours(int input, int output);
void printResult(int workedHours);

int main()
{
    int entryHour = readEntryHour();
    if (!validateHour(entryHour))
    {
        printf("Invalid hour.\n");
        return 0;
    }
    int exitHour = readExitHour();
    if (!validateHour(exitHour))
    {
        printf("Invalid hour.\n");
        return 0;
    }
    printResult(calculateHours(entryHour, exitHour));
    return 0;
}

int validateHour(int hour)
{
    if (hour >= 0 && hour < 24)
    {
        return 1;
    }
    return 0;
}

int readEntryHour()
{
    int entryHour;
    printf("Insert the entry hour: ");
    scanf("%d", &entryHour);

    return entryHour;
}

int readExitHour()
{
    int exitHour;
    printf("Insert the exit hour: ");
    scanf("%d", &exitHour);

    return exitHour;
}

int calculateHours(int input, int output)
{
    if (input == output)
    {
        return 0;
    }
    
    if (input < output)
    {
        return output - input;
    }
    
    if (input > output)
    {
        return 24 - input + output;
    }
    
}

void printResult(int workedHours)
{
    printf("Total worked hours: %d\n", workedHours);
}