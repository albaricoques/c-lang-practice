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

    //int num;
    //int factorial = 1;

    //printf("Insert your number: \n");
    //scanf("%d", &num);

    //for (int i = 1; i <= num; i++)
    //{
        //factorial *= i;
    //}
//    
    //printf("%d\n", factorial);
   
//11. Contar cuántos dígitos tiene un número.

    //int num;
    //int length = 0;
//    
    //printf("Insert a number: ");
    //scanf("%d", &num);

    //for (int i = num; i > 0; i /= 10)
    //{
        //length++;
    //}
//    
    //printf("%d\n", length);

//12. Verificar si un año es bisiesto.
    
    //int year;

    //printf("Insert a year: ");
    //scanf("%d", &year);

    //if (year % 4 == 0)
    //{
        //printf("Your year is a leap year.\n");
    //}
    //else if (year % 100 == 0)
    //{
        //if (year % 400 == 0)
        //{
            //printf("Your year is a leap year.\n");
        //}
    //}

//13. Leer el tiempo en segundos y convertirlo a horas, minutos y segundos.

    //int secs;
    //int mins;
    //int hrs;

    //printf("Insert the total seconds: ");
    //scanf("%d", &secs);

    //if (secs < 60 && secs > 0)
    //{
        //if (secs < 10)
        //{
            //printf("00:00:0%d\n", secs);
        //}
        //else {
            //printf("00:00:%d\n", secs);
        //}
    //}

    //if (secs >= 60)
    //{
        //hrs = secs / 3600;
        //mins = (secs % 3600) / 60;
        //secs %= 60;

        //printf("%02d:%02d:%02d\n", hrs, mins, secs);
    //}
    
//14. Leer un número y verificar si es divisible entre 3 y 5.

    //int num;

    //printf("Insert a number: ");
    //scanf("%d", &num);

    //if (num % 3 == 0 && num % 5 == 0)
    //{
        //printf("Your number is divisible by 3 and 5.\n");
    //}

//15. Calcular el salario de un trabajador dado el número de horas y la tarifa por hora.

    //float rate;
    //int hrs, weeks;
    //float salary;

    //printf("Insert your worked hours per week: ");
    //scanf("%d", &hrs);

    //printf("Insert your hourly rate: ");
    //scanf("%f", &rate);

    //printf("Insert number of weeks worked: ");
    //scanf("%d", &weeks);

    //salary = hrs * rate * weeks;

    //printf("Your total salary is: $%.2f\n", salary);
    
//16. Calcular el promedio de tres notas y determinar si el estudiante aprueba (>= 10.5).
    
    //float score1, score2, score3;

    //printf("Insert your first score: ");
    //scanf("%f", &score1);

    //printf("Insert your second score: ");
    //scanf("%f", &score2);

    //printf("Insert your third score: ");
    //scanf("%f", &score3);

    //if (score1 > 0 && score1 <= 20 && score2 > 0 && score2 <= 20 && score3 > 0 && score3 <= 20)
    //{
        //float average = (score1 + score2 + score3) / 3;
//        
        //if (average >= 10.5 && average <= 20)
        //{
            //printf("%.2lf, You're approved.\n", average);
        //}
        //else {
            //printf("%.2lf, You're failed.\n", average);
            //}
    //}
    //else {
        //printf("Invalid input.\n");
    //}
    
//17. Leer un número de 3 dígitos y mostrar el valor de sus cifras separadas.

    //int num;

    //printf("Insert a three digits number: ");
    //scanf("%d", &num);

    //if (num >= 100 && num <= 1000);
    //{
        //int digit1, digit2, digit3;

        //digit1 = num % 10;
        //digit2 = (num / 10) % 10;
        //digit3 = num / 100;

        //printf("%d, %d, %d\n", digit3, digit2, digit1);
    //}
    
//18. Verificar si una persona puede votar (edad >= 18).

    //int age;

    //printf("Insert your age: ");
    //scanf("%d", &age);

    //if (age >= 18 && age <= 123)
    //{
        //printf("You can vote.\n");
    //}
    //else {
        //printf("You can't vote.\n");
    //}
    
//19. Simular un cajero que recibe un monto y da cambio usando billetes de 100, 50, 20, 10, 5 y monedas de 1.

    //int cash;
    //do {
        //printf("\n=== Insert your card. ====\n");

        //printf("Insert the amount to withdraw.\n1. 20\n2. 50\n3. 100\n4. 500\n5. 1000\n");
        //scanf("%d", &cash);

        //switch (cash)
        //{
        //case 1:
            //printf("Counting your cash...\n");
            //break;
        //case 2:
            //printf("Counting your cash...\n");
            //break;
        //case 3:
            //printf("Counting your cash...\n");
            //break;
        //case 4:
            //printf("Counting your cash...\n");
            //break;
        //case 5:
            //printf("Counting your cash...\n");
            //break;
        //default:
            //break;
        //}

        //if (cash == 1)
        //{
            //int cob;
            //printf("1. Coins or 2. Bill ?\n");
            //scanf("%d", &cob);

            //switch (cob)
            //{
            //case 1:
                //printf("You recived:\n(1) ten bill\n(1) five bill\n(5) one coins\n");
                //break;
            //case 2:
                //printf("You recived:\n(1) twenty bill\n");
            //default:
                //break;
            //}
        //}
        //else if (cash == 2)
        //{
            //printf("You recived:\n(1) fifty bill\n");
        //}
        //else if (cash == 3)
        //{
            //printf("You recived:\n(1) onehundred bill\n");
        //}
        //else if (cash == 4)
        //{
            //printf("You recived:\n(5) onehundred bills\n");
        //}
        //else if (cash == 4)
        //{
            //printf("You recived:\n(5) onehundred bills\n");
        //}
        //else if (cash == 5)
        //{
            //printf("You recived:\n(10) onehundred bills\n");
        //}
        //else {
            //printf("Invalid operation, restarting...\n");
        //}
    //} while (cash = (cash > 5));
    
//20. Determinar si un número tiene exactamente 3 divisores.

    //int num;

    //printf("Insert a number: ");
    //scanf("%d", &num);

    //if (sqrt(num) == (int)sqrt(num)) {
//        
        //int prime = 1;
        //int root = sqrt(num);

        //for (int i = 2; i < root; i++) {
            //if (root % i == 0) {
                //prime = 0;
                //break;
            //}
        //}

        //if (prime == 1) {
            //printf("Your number has exactly 3 divisors.\n");
        //} else {
            //printf("Your number does NOT have exactly 3 divisors.\n");
        //}
    //} else {
        //printf("Your number does NOT have exactly 3 divisors.\n");
    //}
    
//21. Leer una letra y convertirla a mayúscula si es minúscula (y viceversa).

    //char letter;

    //printf("Insert a letter: ");
    //scanf(" %c", &letter);

    //if (letter >= 'a' && letter <= 'z')
    //{
        //letter -= 32;

        //printf("%c\n", letter);
    //}
    //else if (letter >= 'A' && letter <= 'Z')
    //{
        //letter += 32;

        //printf("%c\n", letter);
    //}
    //else("Invalid input.\n");
    
//22. Calcular el precio total con IGV (18%) dado un subtotal.    
    
    //float subtotal;
    //float igv = 0.18;

    //printf("Insert the subtotal: ");
    //scanf("%f", &subtotal);

    //float total = (subtotal * igv) + subtotal;

    //printf("The total amount with IGV is: %.2lf\n", total);

//23. Mostrar todos los números pares entre 1 y N.

    //int num;

    //printf("Insert your number: ");
    //scanf("%d", &num);

    //for (int i = 1; i <= num; i++) 
    //{
        //if (i % 2 == 0) 
        //{
            //printf("%d\n", i);
        //}
    //}

//24. Leer una hora (hh:mm:ss) y sumarle un segundo.

    //char time[9];
    //int hh, mm, ss;
//    
    //printf("Insert a time (hh:mm:ss): ");
    //scanf("%d:%d:%d", &hh, &mm, &ss);

    //ss++;

    //if (ss == 60)
    //{
        //mm++;
        //ss = 0;

        //if (mm == 60)
        //{
            //hh++;
            //mm = 0;

            //if (hh == 24)
            //{
                //hh = 0;
                //mm = 0;
                //ss = 0;
            //}
        //}
//        
    //}
//    

    //printf("%02d:%02d:%02d\n", hh, mm, ss);

//25. Mostrar la tabla de multiplicar de un número del 1 al 10.

    //int num;
    //int result;

   
    //printf("Insert a number: ");
    //scanf("%d", &num);

    //for (int i = 1; i <= 10; i++)
    //{
        //result = num * i;
        //printf("%d * %d = %d\n", num, i, result);
    //}
    
//26. Leer un número de 4 dígitos y verificar si es capicúa.

    //int num;
    //int dig1, dig2, dig3, dig4;

    //printf("Insert a 4 digits number: ");
    //scanf("%d", &num);

    //if (num >= 1000 && num < 10000) 
    //{
        //dig1 = num % 10;
        //dig2 = (num / 10) % 10;
        //dig3 = (num / 100) % 10;
        //dig4 = num / 1000;

        //if (dig1 == dig4 && dig2 == dig3)
        //{
            //printf("Your number is capicua.\n");
        //}
        //else {
            //printf("Your number is not capicua.\n");
        //}
    //}
    //else {
        //printf("Invalid input.\n");
    //}

//27. Calcular el número de cifras pares e impares de un número.

    //char num[20];
    //int pair = 0, odd = 0;

    //printf("Insert a number: ");
    //scanf("%s", num);

    //for (int i = 0; i < strlen(num); i++)
    //{
        //int digit = num[i] - '0';

        //if (digit % 2 == 0 && digit != 0)
        //{
            //pair++;
        //}
        //else if (digit % 2 != 0 && digit != 0){
            //odd ++;
        //}
    //}
//    
    //printf("Your number has %d pair numbers and %d odd numbers.\n", pair, odd);

//28. Leer dos tiempos (en formato hh:mm) y determinar cuál es mayor.

    //int hh1, mm1, ss1;
    //int hh2, mm2, ss2;

    //printf("Insert the first time (hh:mm:ss): ");
    //scanf("%d:%d:%d", &hh1, &mm1, &ss1);

    //printf("Insert the second time (hh:mm:ss): ");
    //scanf("%d:%d:%d", &hh2, &mm2, &ss2);
//    
    //if (hh1 >= 0 && hh1 <= 23 && mm1 >= 0 && mm1 <= 59 && ss1 >= 0 && ss1 <= 59 && hh2 >= 0 && hh2 <= 23 && mm2 >= 0 && mm2 <= 59 && ss2 >= 0 && ss2 <= 59)
    //{
        //if (hh1 > hh2)
        //{
            //printf("Your first time is greater than your second one.\n");
        //}
        //else if (hh2 > hh1)
        //{
            //printf("Your second time is greater than your first one.\n");
        //}
        //else if (hh1 == hh2)
        //{
            //if (mm1 > mm2)
            //{
                //printf("Your first time is greater than your second one.\n");
            //}
            //else if (mm2 > mm1)
            //{
                //printf("Your second time is greater than your first one.\n");
            //}
            //else if (mm1 == mm2)
            //{
                //if (ss1 > ss2)
                //{
                    //printf("Your first time is greater than your second one.\n");
                //}
                //else if (ss2 > ss1)
                //{
                    //printf("Your second time is greater than your first one.\n");
                //}
                //else if (ss1 == ss2)
                //{
                    //printf("Both times are equals.\n");
                //}
//                
            //}
        //}
    //}
    //else {
        //printf("Invalid input.\n");
    //}
    
//29. Calcular la cantidad de días, semanas y años a partir de una cantidad de días.
    
    //int days, weeks, years;

    //printf("Insert the total days: ");
    //scanf("%d", &days);

    //if (days > 0 && days < 7)
    //{
        //printf("%d days.\n", days);
    //}
    //else if (days >= 7)
    //{
        //weeks = days / 7;
        //days %= 7;
//        
        //if (weeks < 52)
        //{
            //printf("%d day(s)\n%d week(s)\n", days, weeks);
        //}
        //else if (weeks >= 52)
        //{
            //years = weeks / 52;
            //weeks %= 52;
            //days %= 7;

            //printf("%d day(s)\n%d week(s)\n%d year(s)\n", days, weeks, years);
        //} 
    //}
    //else {
        //printf("Invalid input.\n");
    //}
    
//30. Leer la edad de tres personas y mostrar la mayor, menor y promedio.
    
    int age1, age2, age3;
    int average;

    printf("Insert the age of the first person: ");
    scanf("%d", &age1);

    printf("Insert the age of the second person: ");
    scanf("%d", &age2);

    printf("Insert the age of the third person: ");
    scanf("%d", &age3);

    if (age1 > 0 && age2 > 0 && age3 > 0)
    {
        average = (age1 + age2 + age3) / 3;

        if (age1 > age2 && age2 > age3)
        {
            printf("Largest: %d\nSmallest: %d\nAverage: %d\n", age1, age3, average);
        }
        else if (age2 > age1 && age1 > age3)
        {
            printf("Largest: %d\nSmallest: %d\nAverage: %d\n", age2, age3, average);
        }
        else if (age3 > age1 && age1 > age2)
        {
            printf("Largest: %d\nSmallest: %d\nAverage: %d\n", age3, age2, average);
        }
        else if (age1 > age3 && age3 > age2)
        {
            printf("Largest: %d\nSmallest: %d\nAverage: %d\n", age1, age2, average);
        }
        else if (age2 > age3 && age3 > age1)
        {
            printf("Largest: %d\nSmallest: %d\nAverage: %d\n", age2, age1, average);
        }
        else if (age3 > age2 && age2 > age1)
        {
            printf("Largest: %d\nSmallest: %d\nAverage: %d\n", age3, age1, average);
        }
    }
    else {
        printf("Invalid input.\n");
    }
    

    return 0;
}