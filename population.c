#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
      int start;
  do
  {
      start = get_int("Start Size: ");
  }
  while (start < 9);
    // TODO: Prompt for end size
      int end;
  do
  {
      end = get_int("End Size: ");
  }
  while (end < start);
    // TODO: Calculate number of years until we reach threshold

    int births;
    {
        births = int("start / 3");
    }

    int deaths;
    {
        deaths = int("start / 4");
    }

    int years;
    {
        years = int();
    }
    // TODO: Print number of years
}
