#include <stdio.h>
#include "temperature_ui.c"
#include "temperature.h"

#define true 1
#define false 0

int main()
{
    display_intro();
    int repeat = true;
    while (repeat)
    {

        display_menu();

        char choice = get_choice();
        printf("Du valgte: %c\n", choice);
        // float celsius;
        // float fahr;

        switch (choice)
        {
        case 'c':
        {
            printf("Indtast celsius: ");

            float celsius = get_value();

            float fahr = celsius_to_fahrenheit(celsius);

            printf("Celsius %.2f = Fahrenheit %.2f\n", celsius, fahr);
        }
        break;

        case 'f':
        {
            printf("Indtast Fahrenheit: ");

            float fahr = get_value();

            float celsius = fahrenheit_to_celsius(fahr);

            printf("Fahrenheit %.2f = Celsius %.2f\n", fahr, celsius);
        }
        break;

        case 'x':
            printf("Du valgte at afslutte, hej hej");
            repeat = false;
            break;

        default:

            printf("Ugyldigt valg");

            // break;
        }
    }

    // float fahr = get_value();
    // // printf("Indtast fahrenheit: ");
    // // scanf("%f", &fahr);

    // float celsius = fahrenheit_to_celsius(fahr);

    // printf("Fahrenheit %.2f = Celsius %.2f\n", fahr, celsius);

    return 0;
}

float fahrenheit_to_celsius(float fahrenheit)
{
    float celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

float celsius_to_fahrenheit(float celsius)
{
    float fahrenheit = celsius * 9 / 5 + 32;
    return fahrenheit;
}