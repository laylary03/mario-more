#include <cs50.h>
#include <stdio.h>

void block_maker(int height);

int main(void)
{
    // Prompts user for height of blocks
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);
    block_maker(height);
}

void block_maker(int height)
{
    // Makes each row
    for (int row_number = height; row_number != 0; row_number--)
    {
        // Tracks amount of characters in each row (maxes out at height)
        int counter = 0;
        int space_maker = row_number;
        if (space_maker > 1)
        {
            do
            {
                // Makes spaces for first case
                printf(" ");
                space_maker--;
                counter++;
            }
            while (space_maker > 1);
        }
        do
        {
            // Makes blocks for first case
            printf("#");
            counter++;
        }
        while (counter < height);

        // Where the second staircase begins
        printf("  ");

        // Makes blocks for second case
        int tracker = height - row_number;
        do
        {
            printf("#");
            tracker--;
        }
        while (tracker > -1);
        printf("\n");
    }
}
