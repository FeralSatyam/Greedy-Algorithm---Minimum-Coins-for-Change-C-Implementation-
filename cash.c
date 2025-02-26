#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int changeOwed;
    int count = 0;
    do
    {
        changeOwed = get_int("Change Owed: ");
    }
    while (changeOwed < 0);

    while (changeOwed > 0)
    {
        if (changeOwed >= 25)
        {
            changeOwed = changeOwed - 25;
            count++;
        }
        else if (changeOwed >= 10)
        {
            changeOwed = changeOwed - 10;
            count++;
        }
        else if (changeOwed >= 5)
        {
            changeOwed = changeOwed - 5;
            count++;
        }
        else
        {
            changeOwed--;
            count++;
        }
    }
    printf("%d\n", count);
}
