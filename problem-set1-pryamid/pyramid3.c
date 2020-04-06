#include <cs50.h>
#include <stdio.h>

void printHash(int n);
void printSpace(int n);

int main(void)
{

    int rows = get_int("Enter number of rows ");

    for (int i = 0; i < rows; i++)
    {
        printSpace(rows - i);
        printHash(i);
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
