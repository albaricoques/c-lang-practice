#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

//1. Calcular el área de un triángulo dados base y altura.

    //float base, height;
//    
    //printf("Insert the base: ");
    //scanf("%f", &base);

    //printf("Insert the height: ");
    //scanf("%f", &height);

    //float area = (base * height) / 2;

    //printf("The area of your triangle is: %.2f\n", area);

//2. Convertir grados Celsius a Fahrenheit.

    //float celsius, fahrenheit;

    //printf("Insert your temperature in °C: ");
    //scanf("%f", &celsius);

    //fahrenheit = (celsius * 9 / 5) + 32;

    //printf("Your temperature in °F is: %.1lf\n", fahrenheit);
    
//3. Determinar si un número es par o impar.

    //int num;

    //printf("Insert a number: ");
    //scanf("%d", &num);

    //if (num % 2 == 0)
    //{
        //printf("Your number is even.\n");
    //}
    //else {
        //printf("Your number is odd.\n");
    //}
    
//4. Calcular el cuadrado y cubo de un número.

    //float num;

    //printf("Insert a number: ");
    //scanf("%f", &num);

    //float square, cube;

    //square = pow(num, 2);
    //cube = pow(num, 3);

    //printf("The square of your number is: %.2lf\n", square);
    //printf("The cube of your number is: %.2lf\n", cube);

//5. Determinar si un número es positivo, negativo o cero.

    //int num;

    //printf("Insert a number: ");
    //scanf("%d", &num);
//    
    //if (num > 0)
    //{
        //printf("Your number is positive.\n");
    //}
    //else if (num < 0)
    //{
        //printf("Your number is negative.\n");
    //}
    //else {
        //printf("Your number is zero.\n");
    //}
    
//6. Leer la edad de una persona y clasificarla: niño (0–12), adolescente (13–17), adulto (18–64), anciano (65+).

    //int age;

    //printf("Insert your age: ");
    //scanf("%d", &age);

    //if (age >= 0 && age <= 12)
    //{
        //printf("You're a kid.\n");
    //}
    //else if (age >= 13 && age <= 17)
    //{
        //printf("You're a teenager.\n");
    //}
    //else if (age >= 18 && age >= 64)
    //{
        //printf("You're an adult.\n");
    //}
    //else if (age > 64)
    //{
        //printf("You're an older adult.\n");
    //}
    //else {
        //printf("Invalid input.\n");
    //}

//7. Leer un carácter e indicar si es una vocal, consonante o símbolo.

    //char letter;

    //printf("Insert a character: ");
    //scanf(" %c", &letter);

    //switch (letter)
    //{
    //case 'a':
        //printf("Your letter is a vowel.\n");
        //break;
    //case 'e':
        //printf("Your letter is a vowel.\n");
        //break;
    //case 'i':
        //printf("Your letter is a vowel.\n");
        //break;
    //case 'o':
        //printf("Your letter is a vowel.\n");
        //break;
    //case 'u':
        //printf("Your letter is a vowel.\n");
        //break;
    //case 'A':
        //printf("Your letter is a vowel.\n");
        //break;
    //case 'E':
        //printf("Your letter is a vowel.\n");
        //break;
    //case 'I':
        //printf("Your letter is a vowel.\n");
        //break;
    //case 'O':
        //printf("Your letter is a vowel.\n");
        //break;
    //case 'U':
        //printf("Your letter is a vowel.\n");
        //break;
    //}

    //if (letter >= 'a' && letter <= 'z' && letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u')
    //{
        //printf("Your letter is a consonat.\n");
    //}
    //else if (letter >= 'A' && letter <= 'Z' && letter != 'A' && letter != 'E' && letter != 'I' && letter != 'O' && letter != 'U')
    //{
        //printf("Your character is a consonat.\n");
    //}
    //else if (letter != '0' && letter != '2' && letter != '3' && letter != '4' && letter != '5' && letter != '6' && letter != '7' && letter != '8' && letter != '9')
    //{
        //printf("Your character is a symbol.\n");
    //}
    
//8. Leer dos números y mostrar el mayor.

    //int num1, num2;
//    
    //printf("Insert the first number: ");
    //scanf("%d", &num1);

    //printf("Insert the second number: ");
    //scanf("%d", &num2);

    //if (num1 > num2)
    //{
        //printf("%d\n", num1);
    //}
    //else if (num2 > num1)
    //{
        //printf("%d\n", num2);
    //}
    
//9. Calcular la suma de los primeros N números naturales.
    
    //int num;
    //int sum = 0;

    //printf("Insert a number: ");
    //scanf("%d", &num);

    //for (int i = 1; i <= num; i++)
    //{
        //sum += i;
    //}
//    
    //printf("%d\n", sum);
    

//10. Calcular el factorial de un número (sin recursión).

    int num;
    int factorial = 1;

    printf("Insert your number: \n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    
    printf("%d\n", factorial);
   
   
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}