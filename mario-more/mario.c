#include <stdio.h>

void print_row(int space, int size);

int main(void)
{
    int height;
    printf("Height: ");
    scanf("%d", &height);

    while (height < 1 || height > 8)
    {
        printf("Height must be between 1 and 8\n");
        printf("Height: ");
        scanf("%d", &height);
    }

    for (int i = 0; i < height; i++)
    {
        print_row(height - i - 1, i + 1);
    }

    return 0;
}

void print_row(int space, int size)
{
    for (int i = 0; i < space; i++)
    {
        printf(" ");
    }
    for (int j = 0; j < size; j++)
    {
        printf("#");
    }
    printf("  ");
    for (int j = 0; j < size; j++)
    {
        printf("#");
    }
    printf("\n");
}
