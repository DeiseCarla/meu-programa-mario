#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("Altura (1-8): ");
    }
    while (height < 1 || height > 8);

    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("❤️");
        }

        printf("  ");

        for (int j = 0; j < i; j++)
        {
            printf("❤️");
        }

        printf("\n");

    }

    return 0;
}
