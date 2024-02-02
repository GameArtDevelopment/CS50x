#include <stdio.h>

void print_row(int length);
void print_space(int space);

int main(void)
{
    int height;
    printf("Height: ");
    scanf("%d", &height);

    for (int i = 0; i < height; i++)
    {
        print_space(i + 1);
        print_row(i + 1);
    }
    return 0;
}

void print_row(int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("#");
    }
    printf("\n");
}

void print_space(int height)
{
    for (int i = 0; i < height; i++)
    {
        printf(" ");
    }
}
