#include <stdio.h>

void menu();
void action(int option);

int main()
{
    menu();
    return 0;
}

void menu()
{
    int option;
    printf("\n\t What would you like to do?");
    printf("\n\t 1. Square a number");
    printf("\n\t 2. Multiply two numbers");
    printf("\n\t 3. Exit\n");
    scanf("%d", &option);
    action(option);
}