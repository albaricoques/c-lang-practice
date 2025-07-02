//45. Sumar las cifras de un número.

#include <stdio.h>

int sum_number(int number);

int main ()
{
    int num;

    printf("Insert your number: ");
    scanf("%d", &num);

    if (sum_number(num))
    {
        int result = sum_number(num);

        printf("%d\n", result);
    }
    else {
        printf("Your number is too long!\n");
    }
    
    

    return 0;
}

int sum_number(int number)
{
    if (number >= 10 && number <= 99)
    {
        int a = number % 10;
        int b = number / 10;

        return a + b;
    }
    else if (number >= 100 && number <= 999)
    {
        int a = number % 10;
        int b = (number / 10) % 10;
        int c = number / 100;

        return a + b + c;
    }
    else if (number >= 1000 && number <= 9999)
    {
        int a = number % 10;
        int b = (number / 10) % 10;
        int c = (number / 100) % 10;
        int d = number / 1000;
        
        return a + b + c + d;
    }
    else if (number >= 10000 && number <= 99999)
    {
        int a = number % 10;
        int b = (number / 10) % 10;
        int c = (number / 100) % 10;
        int d = (number / 1000) % 10;
        int e = number / 10000;
        
        return a + b + c + d + e;
    }
    else if (number >= 100000 && number <= 999999)
    {
        int a = number % 10;
        int b = (number / 10) % 10;
        int c = (number / 100) % 10;
        int d = (number / 1000) % 10;
        int e = (number / 10000) % 10;
        int f = (number / 100000);
        
        return a + b + c + d + e + f;
    }
    else if (number >= 1000000 && number <= 9999999)
    {
        int a = number % 10;
        int b = (number / 10) % 10;
        int c = (number / 100) % 10;
        int d = (number / 1000) % 10;
        int e = (number / 10000) % 10;
        int f = (number / 100000) % 10;
        int g = (number / 1000000);
        
        return a + b + c + d + e + f + g;
    }
    else if (number >= 10000000 && number <= 99999999)
    {
        int a = number % 10;
        int b = (number / 10) % 10;
        int c = (number / 100) % 10;
        int d = (number / 1000) % 10;
        int e = (number / 10000) % 10;
        int f = (number / 100000) % 10;
        int g = (number / 1000000) % 10;
        int h = (number / 10000000);
        
        return a + b + c + d + e + f + g + h;
    }
    else if (number >= 100000000 && number <= 999999999)
    {
        int a = number % 10;
        int b = (number / 10) % 10;
        int c = (number / 100) % 10;
        int d = (number / 1000) % 10;
        int e = (number / 10000) % 10;
        int f = (number / 100000) % 10;
        int g = (number / 1000000) % 10;
        int h = (number / 10000000) % 10;
        int i = (number / 100000000);
        
        return a + b + c + d + e + f + g + h + i;
    }
    else if (number >= 1000000000 && number <= 9999999999)
    {
        int a = number % 10;
        int b = (number / 10) % 10;
        int c = (number / 100) % 10;
        int d = (number / 1000) % 10;
        int e = (number / 10000) % 10;
        int f = (number / 100000) % 10;
        int g = (number / 1000000) % 10;
        int h = (number / 10000000) % 10;
        int i = (number / 100000000) % 10;
        int j = (number / 1000000000); 
        
        return a + b + c + d + e + f + g + h + i + j;
    }
    else {
        return 0;
    }
}

