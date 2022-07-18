#include <math.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars <= 0);

    int cents = round(dollars * 100);
    int coins = 0;
    int quarter = 0;
    int dime = 0;
    int nickel = 0;
    int penny = 0;

    while (cents >= 25)
    {
        coins ++;
        quarter ++;
        cents -= 25;
    }

    while (cents >= 10)
    {
        coins ++;
        dime ++;
        cents -= 10;
    }

    while (cents >= 5)
    {
        coins ++;
        nickel ++;
        cents -= 5;
    }

    while (cents >= 1)
    {
        coins ++;
        penny ++;
        cents -= 1;
    }

    printf("There are %i coin(s)\n", coins);
    printf("%i quarter(s)\n", quarter);
    printf("%i dime(s)\n", dime);
    printf("%i nickel(s)\n", nickel);
    printf("%i penny(pennies)\n", penny);
}