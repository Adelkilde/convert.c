#include <stdio.h>

void display_intro()
{
    printf("Velkommen til temperatur-konvertering\n");
    printf("-------------------------------------\n");
}

void display_menu()
{
    printf("Vælg funktion:\n");
    printf("(f) Fahrenheit til Celsius\n");
    printf("(c) Celsius til Fahrenheit\n");
    printf("(x) Afslut\n");
}

float get_choice()
{
    char choice;
    printf("Indtast valg: ");
    scanf(" %c", &choice);
    return choice;
}

float get_value()
{
    float value;
    // printf("Indtast værdi: ");
    scanf("%f", &value);
    return value;
}