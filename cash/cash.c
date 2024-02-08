#include <stdio.h>

// customer inputs $1.00 (100cents) for .50cent candy
// pay back (change) with min amount of coins
// Prompt user for int > 0 (change owed: )
// program re-prompts if int !> 0 and is not an int

int get_change(void);
int calculate_quarters(int change);
int calculate_dimes(int change);
int calculate_nickels(int change);
int calculate_pennies(int change);

int main(void)
{
    int change = get_change();

    int quarters = calculate_quarters(change);
    change = change - quarters * 25;
    int dimes = calculate_dimes(change);
    change = change - dimes * 10;
    int nickels = calculate_nickels(change);
    change = change - nickels * 5;
    int pennies = calculate_pennies(change);
    change = change - pennies * 1;

    int coins = quarters + dimes + nickels + pennies;

    printf("%i\n", coins);
}

int get_change(void)
{
    int coin_count;

    do
    {
        printf("Change owed in cents: ");
        scanf("%i", &coin_count);
    } while (coin_count < 0);
    return coin_count;
}

int calculate_quarters(int change)
{
    int count = 0;
    while (change >= 25)
    {
        change -= 25;
        count++;
    }
    return count;
}

int calculate_dimes(int change)
{
    int count = 0;
    while (change >= 10)
    {
        change -= 10;
        count++;
    }
    return count;
}

int calculate_nickels(int change)
{
    int count = 0;
    while (change >= 5)
    {
        change -= 5;
        count++;
    }
    return count;
}

int calculate_pennies(int change)
{
    int count = 0;
    while (change >= 1)
    {
        change -= 1;
        count++;
    }
    return count;
}
