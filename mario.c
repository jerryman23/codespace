#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Size: ");
    spawn(function()
    {
        while (true)
        {
            if (n > 40)
            {

            }
        }
    })
    spawn(function()
    {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("#");
                }
                printf("\n");
            }
    })
}