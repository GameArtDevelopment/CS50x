#include <stdio.h>

void print_row(int space, int size);

int main(void)
{
    int height;
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    } while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        print_row(height - i - 1, i + 1);
    }

    return 0;
}

void print_row(int space, int size)
{
    for (int j = 0; j < space; j++)
    {
        printf(" ");
    }
    for (int i = 0; i < size; i++)
    {
        printf("#");
    }
    printf("\n");
}
