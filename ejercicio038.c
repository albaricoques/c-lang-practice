//38. Calcular el MCD y el MCM de dos números.

#include <stdio.h>

int calculate_mcd(int a, int b);
int calculate_mcm(int a, int b);

int main()
{
    int num1, num2;

    printf("Insert your first number: ");
    scanf("%d", &num1);

    printf("Insert your second number: ");
    scanf("%d", &num2);

    int mcd = calculate_mcd(num1, num2);
    int mcm = calculate_mcm(num1, num2);

    printf("MCD: %d\nMCM: %d\n", mcd, mcm);
    
    return 0;
}

int calculate_mcd(int a, int b) {
    
    //Euclides's Algorithm to calculate MCD:
    while (b != 0) {    
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int calculate_mcm(int a, int b)
{
    //MCD is used to calculate MCM:
    int mcd = calculate_mcd(a, b);
    
    return (a * b) / mcd;
}