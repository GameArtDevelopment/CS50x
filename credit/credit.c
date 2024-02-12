
#include <stdio.h>

int count_digits(long credit_card);

int main(void)
{
    long credit_card = get_long("Number: ");
    int sum_count_digits = count_digits(credit_card);
}

int count_digits(long credit_card)
{
    int sum = 0;
    long cc = credit_card;
    do
    {
        cc = cc / 10;
        sum++;
    } while (cc > 0);

    if (sum != 13 && sum != 15 && sum != 16)
    {
        printf("INVALID\n");
    }
}