#include <stdio.h>
int main()
{
    int num, fact = 1;
    puts("entre your number");
    scanf("%d", &num);
    if (num == 0)
    {
        puts("le factorielle est : 0");
    }
    else if (num < 0)
    {
        puts("Veullez entre un nombre positif");
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        printf("le factorielle de %d est : %d", num, fact);
    }

    return 0;
}
// Question:
// Write a C program that asks the user to enter an integer.
// The program calculates and displays the factorial
// of the entered number. The program should also check
// if the number is zero or negative and display
// appropriate messages in each case.