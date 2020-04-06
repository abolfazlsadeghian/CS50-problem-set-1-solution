#include <cs50.h>
#include <stdio.h>

void printHash(int n);
void printSpace(int n);

int main(void)
{
    int rows, j;
    int space;

    do
    {
        rows = get_int(" N: ");
    } while (rows < 1);

    for (int i = 0; i < rows; i++)
    {

        printSpace(rows - i);
        printHash((2 * i) - 1);

        printf("\n");
    }
}

void printHash(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
}

void printSpace(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}
