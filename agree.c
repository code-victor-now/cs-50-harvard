#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Agree form with low and cap letters
    char c = get_char("Do you agree?");
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if(c == 'n' || c == 'N')
    {
        printf("Not Agreed.\n");
    }
}
