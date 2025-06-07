#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    
//1. Leer un número entero y mostrar si es positivo, negativo o cero.

    //int num;

    //printf("Insert a number: ");
    //scanf("%d", &num);

    //if (num > 0)
    //{
        //printf("Your number is positive.\n");
    //}
    //else if(num <= -1) {
        //printf("Your number is negative.\n");
    //}
    //else {
        //printf("Your number is a zero.\n");
    //}
    
//2. Leer dos enteros y mostrar su suma, resta, multiplicación y división.

    //int num1;
    //int num2;
    //char opr;
//    
    //printf("Insert two numbers: ");
    //scanf("%d", &num1);
    //scanf("%d", &num2);

    //printf("Now choose an arithmetical operator +, -, *, /: \n");
    //scanf(" %c", &opr);


    //if (opr == '+')
    //{
        //printf("%d\n", num1 + num2);        
    //}
    //else if (opr == '-')
    //{
        //printf("%d\n", num1 - num2);
    //}
    //else if (opr == '*')
    //{
        //printf("%d\n", num1 * num2);
    //}
    //else if (opr == '/')
    //{
        //printf("%d\n", num1 / num2);
    //}
    //else {
        //printf("Invalid operation.");
    //}

//3. Leer dos números y determinar cuál es mayor, cuál es menor o si son iguales.

    //int num1;
    //int num2;

    //printf("Hello!, please insert two numbers.\n");
//    
    //printf("Insert the first number: ");
    //scanf("%d", &num1);
//    
    //printf("Insert the second number: ");
    //scanf("%d", &num2);

    //if (num1 > num2)
    //{
        //printf("Your first number is greater than your second number.\n");
    //}

    //else if (num1 < num2)
    //{
        //printf("Your second number is greater than your first number.\n");
    //}
    //else {
        //printf("Your numbers are equals.\n");
    //}
    
//4. Leer un número flotante y mostrar solo la parte entera.

    //float num;
//    
    //printf("Insert a float number: ");
    //scanf("%f", &num);

    //printf("Your number is now: %d\n", (int)num);
    
//5.Leer la edad de una persona y mostrar si es niño (0-12), adolescente (13-17), adulto (18-64) o adulto mayor (65+).

    //int age;

    //printf("Insert your age: ");
    //scanf("%d", &age);

    //if (age <= 12 && age > 0)
    //{
        //printf("You are a kid.\n");
    //}
    //else if (age >= 13 && age < 18) {
        //printf("You are a teenager.\n");
    //}
    //else if (age >= 18 && age < 65) {
        //printf("You are an adult.\n");
    //}
    //else if (age > 64) {
        //printf("You are an older adult\n");
    //}

//6.Leer tres números y mostrar el mayor de los tres.

    //int num1;
    //int num2;
    //int num3;

    //printf("Insert the first number: ");
    //scanf("%d", &num1);

    //printf("Insert the second number: ");
    //scanf("%d", &num2);

    //printf("Insert the third number: ");
    //scanf("%d", &num3);

    //if (num1 > num2 && num1 > num3)
    //{
        //printf("Your first number is greater.\n");
    //}
    //else if (num2 > num1 && num2 > num3) {
        //printf("Your second number is greater.\n");
    //}
    //else if (num3 > num1 && num3 > num2) {
        //printf("Your third number is greater.\n");
    //}
    
    //7. Leer un número entero y mostrar si es par o impar.

    //int num;

    //printf("Insert your number: ");
    //scanf("%d", &num);

    //if (num %2 == 0)
    //{
        //printf("Your number is pair.\n");
    //}
    //else {
        //printf("Your number is odd.\n");
    //}

//8. Leer dos caracteres y verificar si son iguales.
    
    //char char1;
    //char char2;

    //printf("Insert a character: ");
    //scanf(" %c", &char1);

    //printf("Insert other character: ");
    //scanf(" %c", &char2);

    //if (char1 == char2)
    //{
        //printf("Your characters are equals.\n");
    //}

//9. Leer un número del 1 al 7 e imprimir el día de la semana correspondiente.

    //int num;

    //printf("Insert a number from 1 to 7: ");
    //scanf("%d", &num);

    //if (num == 1)
    //{
        //printf("It's Monday!\n");
    //}
    //else if (num == 2) {
        //printf("It's Tuesday!\n");
    //}
    //else if (num == 3) {
        //printf("It's Wednesday!\n");
    //}
    //else if (num == 4) {
        //printf("It's Thursday!\n");
    //}
    //else if (num == 5) {
        //printf("It's Friday!\n");
    //}
    //else if (num == 6) {
        //printf("It's Saturday!\n");
    //}
    //else if (num == 7) {
        //printf("It's Monday!\n");
    //}

//10. Leer una letra y verificar si es mayúscula o minúscula (revisa tu tabla ASCII).
    
    //char letter;

    //printf("Insert a letter: ");
    //scanf("%c", &letter);

    //if (letter >= 'A' && letter <= 'Z')
    //{
        //printf("Your letter is capital.\n");
    //}
    //else if (letter >= 'a' && letter <= 'z') {
        //printf("Your letter is lower case.\n");
    //}
    
//11. Leer una base y una altura y calcular el área de un triángulo (usar float y operadores aritméticos).

    //float base;
    //float height;
    //float area;
//    
    //printf("Insert the base: ");
    //scanf("%f", &base);

    //printf("Insert the height: ");
    //scanf("%f", &height);

    //area = (base * height) / 2;

    //printf("The area of your triangle is: %f\n", area); 

//12. Leer dos números y usar un operador ternario para mostrar el mayor.

    //int num1;
    //int num2;

    //printf("Insert the first number: ");
    //scanf("%d", &num1);

    //printf("Insert the second number: ");
    //scanf("%d", &num2);

    //(num1 > num2) ? printf("Your first number is greater.\n") : (num2 > num1) ? printf("Your second number is grater.\n") : printf("Your numbers are equals.");

//13. Leer un número y usar un operador ternario para mostrar "par" o "impar".

    //int num;

    //printf("Insert your number: ");
    //scanf("%d", &num);

    //(num % 2 == 0) ? printf("Your number is pair.\n") : printf("Your number is odd.\n"); 

//14. Leer un número y verificar si está entre 10 y 100 inclusive.

    //int num;

    //printf("Insert your number: ");
    //scanf("%d", &num);

    //if (num >= 10 && num <= 100)
    //{
        //printf("Your number is between 10 and 100.\n");
    //}
    
//15. Leer un carácter y verificar si es un dígito.

    //char entrada[10];
//    
    //printf("Insert a single character: ");
    //fgets(entrada, sizeof(entrada), stdin);

    //if (strlen(entrada) == 2 && entrada[0] >= '0' && entrada[0] <= '9') {
        //printf("You entered a digit.\n");
    //} else {
        //printf("Invalid input.\n");
    //}

    //char digit;

    //printf("Insert a single character: ");
    //scanf("%c", &digit);

    //if (digit >= '0' && digit <= '9')
    //{
        //printf("You entered a digit.\n");
    //}
    //else {
        //printf("Invalid input.\n");
    //}
    

//16. Leer un número flotante y un entero, y mostrar la multiplicación como double, mostrando dos decimales.

    //float num1;
    //int num2;
    //double num3;

    //printf("Insert the float number: ");
    //scanf("%f", &num1);

    //printf("Insert the integer number: ");
    //scanf("%d", &num2);

    //num3 = num1 * num2;

    //printf("Your result is: %.2lf\n", num3);

//17. Leer un año y verificar si es bisiesto.

    //int year;

    //printf("Insert a year: ");
    //scanf("%d", &year);

    //if (year % 100 == 0) 
    //{
        //if (year % 400 == 0)
        //{
            //printf("Your year is a leap year.\n");
        //}
        //else {
            //printf("It's not a leap year.\n");
        //}
    //}
    //else if (year % 4 == 0)
    //{
        //printf("Your year is a leap year.\n");
    //}
    //else {
        //printf("It's not a leap year.\n");
    //}
    
//18. Leer tres números y mostrarlos en orden ascendente.

    //int num1;
    //int num2;
    //int num3;

    //printf("Insert the first number: ");
    //scanf("%d", &num1);

    //printf("Insert the second number: ");
    //scanf("%d", &num2);

    //printf("Insert your third number: ");
    //scanf("%d", &num3);

    /*if (num1 > num2 && num1 > num3 && num2 > num3)
    {
        printf("%d\n", num3);
        printf("%d\n", num2);
        printf("%d\n", num1);
    }
    else if (num2 > num1 && num2 > num3 && num1 > num3)
    {
        printf("%d\n", num3);
        printf("%d\n", num1);
        printf("%d\n", num2);
    }
    else if (num3 > num1 && num3 > num2 && num1 > num2)
    {
        printf("%d\n", num2);
        printf("%d\n", num1);
        printf("%d\n", num3);
    }
    else if (num1 > num2 && num1 > num3 && num3 > num2)
    {
        printf("%d\n", num2);
        printf("%d\n", num3);
        printf("%d\n", num1);
    }
    else if (num2 > num1 && num2 > num3 && num3 > num1)
    {
        printf("%d\n", num1);
        printf("%d\n", num3);
        printf("%d\n", num2);
    }
    else if (num3 > num1 && num3 > num2 && num2 > num1)
    {
        printf("%d\n", num1);
        printf("%d\n", num2);
        printf("%d\n", num3);
    }*/
    
    //int aux;

    //if (num1 < num2) {
        //aux = num1;
        //num1 = num2;
        //num2 = aux;
    //}

    //if (num1 < num3) {
        //aux = num1;
        //num1 = num3;
        //num3 = aux;
    //}

    //if (num2 < num3) {
        //aux = num2;
        //num2 = num3;
        //num3 = aux;
    //}

    //printf("%d\n", num3);
    //printf("%d\n", num2);
    //printf("%d\n", num1);

//19. Leer un número entero y determinar si es múltiplo de 3 y de 5 a la vez.

    //int num;

    //printf("Insert your number: ");
    //scanf("%d", &num);

    //if (num % 3 == 0 && num % 5 == 0)
    //{
        //printf("Your number is divisible for 3 and 5.\n");
    //}

//20. Leer un número entero de 3 cifras y mostrar la suma de sus dígitos.

   //int num;

    //printf("Insert your number: ");
    //scanf("%d", &num);

    //if (num >= 100 && num <= 999) {
        //int unity = num % 10;         
        //int ten = (num / 10) % 10;  
        //int hundred = num / 100;       

        //int sum = unity + ten + hundred;

        //printf("The sum of the digits is: %d\n", sum);
    //} else {
        //printf("Please enter a 3-digit number.\n");
    //}

//21. Leer el peso (kg) y altura (m) de una persona, calcular su IMC y clasificarlo (IMC = peso (en kg) / (estatura (en metros) al cuadrado)).

    //float weight;

    //float height;

    //printf("Insert your weight (kg): ");
    //scanf("%f", &weight);

    //printf("Insert your height (m): ");
    //scanf("%f", &height);

   //float imc = weight / (height * height);
//    
    //if (imc < 18.5)
    //{
        //printf("Your IMC is %.2lf, low wheight.\n", imc);
    //}
    //else if (imc >= 18.5 && imc <= 25)
    //{
        //printf("Your IMC is %.2lf, healthy weight.\n", imc);
    //}
    //else if (imc >= 25 && imc < 30)
    //{
        //printf("Your IMC is %.2lf, overweight.\n", imc);
    //}
    //else {
        //printf("Your IMC is %.2lf, obesity.\n", imc);
    //}

//22. Leer dos números y mostrar el resultado de elevar el primero al segundo (solo enteros positivos).

    //int num1;
    //int num2;

    //printf("Insert your number: ");
    //scanf("%d", &num1);

    //printf("Insert your number: ");
    //scanf("%d", &num2);

    //if (num1 > 0 && num2 > 0)
    //{
        //int num3 = (int)pow(num1, num2);
        //printf("%d\n", num3);
    //}

//23. Leer una hora en formato 24h (HHMM) y determinar si es de mañana, tarde o noche.

    //char time[6];

    //printf("Enter the time: ");
    //scanf("%5s", time);

    //int hh, mm;
    //sscanf(time, "%d:%d", &hh, &mm);


    //if (hh >= 0 && hh < 24 && mm >= 0 && mm < 60) {
       //if (hh >= 5 && hh < 12) {
            //printf("Good Morning!\n");
       //}
//        
        //else if (hh >= 12 && hh < 19) {
            //printf("Good Afternoon!\n");
        //}
//        
        //else {
            //printf("Good Night!\n");
        //}
//        

    //}
    
//24. Leer un carácter y mostrar su código ASCII.

    //char char1;

    //printf("Enter your character: ");
    //scanf("%c", &char1);

    //printf("Your ASCII code is: %d\n", char1);

//25. Leer un número entero y decir si tiene 1, 2, 3, 4 o 5.

    //int num;

    //printf("Insert your number: ");
    //scanf("%d", &num);

    //if (num % 10 == 1 || num % 10 == 2 || num % 10 == 3 || num % 10 == 4 || num % 10 == 5 || 
        //num / 10 == 1 || num / 10 == 2 || num / 10 == 3 || num / 10 == 4 || num / 10 == 5)
    //{
        //printf("Your number contains one of these numbers: 1, 2, 3, 4, 5.\n");
    //}  

    //int num, aux;
    //int a, b, c, d, e, f, g, h, i, j;
    //// hasta 10 caracteres
//    
    //printf("Insert your number:");
    //scanf("%d", &num);
//    
    //a = num % 10; aux = num/10;
    //b = num % 10; aux = num/10;
    //c = num % 10; aux = num/10;
    //d = num % 10; aux = num/10;
    //e = num % 10; aux = num/10;
    //f = num % 10; aux = num/10;
    //g = num % 10; aux = num/10;
    //h = num % 10; aux = num/10;
    //i = num % 10; aux = num/10;
    //j = num % 10;

    //if (a >= 1 && a <= 5) {
        //printf("Tiene 1...5 en la primera posición\n");
    //}
    //if (b >= 1 && b <= 5) {
        //printf("Tiene 1...5 en la segunda posición\n");
    //}
    //if (c >= 1 && c <= 5) {
        //printf("Tiene 1...5 en la tercera posición\n");
    //}
    //if (d >= 1 && d <= 5) {
        //printf("Tiene 1...5 en la cuarta posición\n");
    //}
    //if (e >= 1 && e <= 5) {
        //printf("Tiene 1...5 en la quinta posición\n");
    //}
    //if (f >= 1 && f <= 5) {
        //printf("Tiene 1...5 en la sexta posición\n");
    //}
    //if (g >= 1 && g <= 5) {
        //printf("Tiene 1...5 en la setima posición\n");
    //}
    //if (h >= 1 && h <= 5) {
        //printf("Tiene 1...5 en la octava posición\n");
    //}
    //if (i >= 1 && i <= 5) {
        //printf("Tiene 1...5 en la novena posición\n");
    //}
    //if (j >= 1 && j <= 5) {
        //printf("Tiene 1...5 en la decima posición\n");
    //}

//26. Leer una calificación y mostrar si está aprobada (>10.5) usando operador ternario.

    //float score;

    //printf("Insert a score: ");
    //scanf("%f", &score);

    //(score > 10.5 && score <= 20) ? printf("Approved.\n") : (score > 20 || score < 0) ? printf("Invalid input.\n") : printf("Failed.\n");

//27. Leer una cantidad de segundos y convertirla en horas, minutos y segundos.

    //int secs, mins, hrs;

    //printf("Insert the total seconds: ");
    //scanf("%d", &secs);

    //if (secs > 59)
    //{
        //mins = secs / 60;
        //int rest = secs % 60;

        //if (rest > 9 && mins > 9)
        //{
           //printf("%d:%d\n", mins, rest);
        //}
        //else if (rest < 10 && mins > 9)
        //{
            //printf("%d:0%d\n", mins, rest);
        //}
        //else if (rest > 9 && mins < 10)
        //{
            //printf("0%d:%d\n", mins, rest);
        //}
        //else {
           //printf("0%d:0%d\n", mins, rest);
        //}
//    
    //if (mins > 59)
    //{
        //hrs = mins / 60;
        //int rest2 = mins % 60;

        //if (rest2 > 9 && hrs > 9 && secs > 9)
        //{
           //printf("%d:%d:%d\n", hrs, rest2, rest);
        //}
        //else if (rest2 < 10 && hrs > 9 && secs > 9)
        //{
            //printf("%d:0%d:%d\n", hrs, rest2, rest);
        //}
        //else if (rest2 > 9 && hrs < 10 && rest > 9)
        //{
            //printf("0%d:%d:%d\n", hrs, rest2, rest);
        //}
        //else if (rest2 > 9 && hrs > 9 && rest < 10)
        //{
            //printf("%d:%d:0%d\n", hrs, rest2, rest);
        //}
        //else {
            //printf("0%d:0%d:0%d\n", hrs, rest2, rest);
        //}
    //}
    //}

//28. Leer una temperatura en Celsius y convertirla a Fahrenheit.
    
    //float celsius, fahrenheit;

    //printf("Insert a °C temperature: ");
    //scanf("%f", &celsius);

    //fahrenheit = (celsius * 9 / 5) + 32;

    //printf("The convertion is: °F %.1lf\n", fahrenheit);

//29. Leer tres lados y verificar si forman un triángulo válido.

    //float side1, side2, side3;

    //printf("Insert the first triangle side lenght: ");
    //scanf("%f", &side1);

    //printf("Insert the sencond triangle side lenght: ");
    //scanf("%f", &side2);

    //printf("Insert the third triangle side lenght: ");
    //scanf("%f", &side3);

    //if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    //{
        //printf("You can draw a triangle!\n");
    //}
    //else {
        //printf("Draw a triangle is not possible.\n");
    //}
    
//30. Leer dos números y verificar si tienen el mismo signo (positivo/negativo).         

    //int num1, num2;

    //printf("Insert the first number: ");
    //scanf("%d", &num1);

    //printf("Insert the second number: ");
    //scanf("%d", &num2);

    //if (num1 > 0 && num2 > 0)
    //{
        //printf("You have positives numbers.\n");
    //}
    //else if (num1 < 0 && num2 < 0)
    //{
        //printf("You have negatives numbers.\n");
    //}
    //else if (num1 > 0 && num2 < 0)
    //{
        //printf("You have positive and nugative numbers.\n");
    //}
    //else if (num1 < 0 && num2 > 0)
    //{
        //printf("You have negative and positive numbers.\n");
    //}
    
 //31. Leer un número y mostrar su última cifra.   
    
    //int num;

    //printf("Insert a number: ");
    //scanf("%d", &num);

    //int last = num % 10; 
//    
    //printf("The last digit is: %d\n", last);

//32. Leer un número de 4 cifras y mostrarlo al revés.    

    //int num;

    //printf("Insert a 4 digits number: ");
    //scanf("%d", &num);

    //if (num <= 9999 && num >= 1000)
    //{
        //int dig1 = num % 10;
        //int dig2 = (num / 10) % 10;
        //int dig3 = (num / 100) % 10;
        //int dig4 = num / 1000;

        //printf("%d%d%d%d\n", dig1, dig2, dig3, dig4);
    //}
    //else if (num > -9999 && num <= -1000)
    //{
        //int dig1 = num % 10;
        //int dig2 = (num / -10) % 10;
        //int dig3 = (num / -100) % 10;
        //int dig4 = num / -1000;

        //printf("%d%d%d%d\n", dig1, dig2, dig3, dig4);
    //}
//    

//33. Leer una nota (0 a 20) y asignar una letra A, B, C, D, E usando if else if.

    //int score;

    //printf("Inser your score: ");
    //scanf("%d", &score);

    //if (score >= 0 && score <= 20)
    //{
        //if (score < 10)
        //{
            //printf("E, keep trying harder!\n");
        //}
        //else if (score >= 10 && score < 15)
        //{
            //printf("D, almost there!\n");
        //}
        //else if (score >= 15 && score <=16)
        //{
            //printf("C, not bad!\n");
        //}
        //else if (score >= 17 && score <=18)
        //{
            //printf("B, you're doing well!\n");
        //}
        //else {
            //printf("A, Excellent!!!\n");
        //}
    //}
    //else
    //{
        //printf("Invalid input.\n");
    //}
    
//34. Leer una cantidad de dinero y calcular el número mínimo de billetes (100, 50, 20, 10, 5, 1).

    int cash;
    int onehundredbills, fiftybills, twentybills, tenbills, fivebills;


    printf("Insert the amount of cash: ");
    scanf("%d", &cash);

    if (cash > 0)
    {
        onehundredbills = cash / 100;
        cash %= 100;
        if (onehundredbills != 0)
        {
            printf("You recived %d onehundred bills.\n", onehundredbills);
        }
        
        fiftybills = cash / 50;
        cash %= 50;
        
        if (fiftybills != 0)
        {
            printf("You recived %d fifty bills.\n", fiftybills);
        }
        
        twentybills = cash / 20;
        cash %= 20;
        
        if (twentybills != 0)
        {
            printf("You recived %d twenty bills.\n", twentybills);
        }
        
        tenbills = cash / 10;
        cash %= 10;
        
        if (tenbills != 0)
        {
            printf("You recived %d ten bills.\n", tenbills);
        }
        
        fivebills = cash / 5;
        cash %= 5;

        if (fiftybills != 0)
        {
            printf("You recived %d five bills.\n", fivebills);
        }
        
        if (cash != 0)
        {
            printf("You recived %d one bills.\n", cash);
        }
    }
    




    return 0;
}