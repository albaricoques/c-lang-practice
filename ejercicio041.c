//41. Calcular el total a pagar en una tienda según producto y cantidad (con precios fijos).

#include <stdio.h>

float calculate_product(int product);

int main()
{
    int product_code;

    printf("1001 - Milk(1L) = \n1002 - Butter(400g)\n1003 - Cheese(1/2kg)\n1004 - Yogurt(150g)\n1005 - Egg(12U)\n1006 - Beacon(400g)\n1007 - Steak(1kg)\n1008 - fish(1kg)\n1009 - Apple(1U)\n1010 - Bread(400g)\nInsert the code of your product: ");
    scanf("%d", &product_code);

    float product_price = calculate_product(product_code);

    if (product_price > 0)
    {
        int quantity;
        printf("Insert the quantity: ");
        scanf("%d", &quantity);

        float product_price = calculate_product(product_code);

        float total_price = product_price * quantity;
        printf("Total amount: $%.2f\n", total_price);
    }
    else {
        printf("Incorrect code.\n");
    }
    return 0;
}

float calculate_product(int product)
{
    int milk = 1001;
    int butter = 1002;
    int cheese = 1003;
    int yogurt = 1004;
    int egg = 1005;
    int beacon = 1006;
    int steak = 1007;
    int fish = 1008;
    int apple = 1009;
    int bread = 1010;

    float price = 0;

    switch (product)
    {
    case 1001:
        price = 1.50;
        break;
    case 1002:
        price = 2.30;
        break;
    case 1003:
        price = 3.80;
        break;
    case 1004:
        price = 1.00;
        break;
    case 1005:
        price = 2.50;
        break;
    case 1006:
        price = 4.20;
        break;
    case 1007:
        price = 7.90;
        break;
    case 1008:
        price = 6.50;
        break;
    case 1009:
        price = 0.60;
        break;
    case 1010:
        price = 1.80;
        break;
    default:
        break;
    }

    return price;
}