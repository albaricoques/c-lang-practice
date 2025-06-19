//32. Leer un número y mostrar su representación binaria (usando operadores lógicos y enteros).

#include <stdio.h>

int readNumber();
int convertNumber(int decimalNumber);
void printResult(int binaryNumber);

int main()
{
    int num = readNumber();
    int binaryNum = convertNumber(num);

    printResult(binaryNum);
    
    return 0;
}

int readNumber()
{
    int num;
    printf("Insert a number: ");
    scanf("%d", &num);

    return num;
}

int convertNumber(int decimalNumber)
{
    int binaryNumber = 0;
    int position = 1;
    do 
    {
        binaryNumber += (decimalNumber % 2) * position;
        decimalNumber /= 2;
        position *= 10;
    } 
    while (decimalNumber > 0);
    
    return binaryNumber;
}

void printResult(int binaryNumber)
{
    printf("%d\n", binaryNumber);
}