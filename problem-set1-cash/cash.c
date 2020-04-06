#include <stdio.h>
#include <cs50.h>
//25cent-quarter 10cent-dimes 5cent-nickle 1cent-cents

int main(void)
{
    int quarter = 0, dimes = 0, nickles = 0, pennies = 0;
    float enteredValue;
    do
    {
        enteredValue = get_float("Please enter the remainder amount : ");
    } while (enteredValue <= 0);

    printf("Entered amound is %0.2f\n", enteredValue);
    int amount = enteredValue * 100;
    printf("Changing to integer %i\n", amount);

    for (amount; amount > 0;)
    {
        if (amount >= 25)
        {
            amount -= 25;
            quarter++;
        }
        else if (amount >= 10)
        {
            amount -= 10;
            dimes++;
        }
        else if (amount >= 5)
        {
            amount -= 5;
            nickles++;
        }

        else if (amount < 5 && amount > 0)
        {
            amount -= 1;
            pennies++;
        }
    }
    printf("==============================\n");
    printf("**** The Change Amount is ****\n");
    printf("Quarter\t:%i\n", quarter);
    printf("Dimes\t:%i\n", dimes);
    printf("Nicles\t:%i\n", nickles);
    printf("Pennies\t:%i\n", pennies);
    printf("==============================\n");
}
