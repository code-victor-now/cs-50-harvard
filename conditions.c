#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get numbers from user
    int x = get_int("x: ");
    int y = get_int("y: ");

    // Compare x and y
    if (x < y)
    {
        printf("x is less than y\n");
    }

    else if (x > y)
    {
        printf("y is less than x\n");
    }

    else
    {
        printf("x is equal to y\n");
    }
}
