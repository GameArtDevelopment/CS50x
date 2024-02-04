#include <stdio.h>

void print_pyramid(int height);

int main(void)
{
    int height;
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    } while (height < 1 || height > 8);

    print_pyramid(height);

    return 0;
}

void print_pyramid(int height)
{
    for (int i = 0; i < height; i++)
    {
        // Print spaces
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        // Print left side #
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        // Print gap
        printf("  ");

        // Print right side #
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        printf("\n");
    }
}
