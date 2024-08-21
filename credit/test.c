#include <stdio.h>
#include <stdbool.h>

// Function to calculate the number of digits in a number
int num_digits(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

// Function to get the digit at a specific position of a number
int get_digit(long long number, int position)
{
    while (position--)
    {
        number /= 10;
    }
    return number % 10;
}

// Function to check if the credit card number is valid using Luhn's Algorithm
bool is_valid(long long cc_number)
{
    int sum = 0;
    int num_of_digits = num_digits(cc_number);
    for (int i = 1; i <= num_of_digits; i++)
    {
        int digit = get_digit(cc_number, i);
        if (i % 2 == 0)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit = digit / 10 + digit % 10;
            }
        }
        sum += digit;
    }
    return (sum % 10 == 0);
}

// Function to identify the type of credit card
void identify_card(long long cc_number)
{
    int num_of_digits = num_digits(cc_number);
    int first_two_digits = cc_number / 1000000000000; // Extract the first two digits

    if ((num_of_digits == 13 || num_of_digits == 16) && first_two_digits / 10 == 4)
    {
        printf("VISA\n");
    }
    else if (num_of_digits == 15 && (first_two_digits == 34 || first_two_digits == 37))
    {
        printf("AMEX\n");
    }
    else if (num_of_digits == 16 && (first_two_digits >= 51 && first_two_digits <= 55))
    {
        printf("MASTERCARD\n");
    }
    else
    {
        printf("INVALID\n");
    }
}

int main(void)
{
    long long cc_number;
    int success;

    do
    {
        printf("Enter your credit card number: ");
        // Read the input and check if scanf was successful
        success = scanf("%lld", &cc_number);
        // Clear the input buffer
        while (getchar() != '\n')
            ; // Discard the rest of the input buffer
    } while (success != 1 || cc_number <= 0); // Check if input was not a number or if it's less than or equal to zero

    if (is_valid(cc_number))
    {
        identify_card(cc_number);
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}
