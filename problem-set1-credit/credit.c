#include <stdio.h>
#include <cs50.h>

long int findLength(long int n);
string validOrNot(long int n);
string cardType(long int n, int cardLength);

int main(void)
{
    long int cardNum = get_long("Credit Card No. :\n");
    printf("You have entered %li\n", cardNum);
    printf("Length of Numbers Entered is %li \n", findLength(cardNum));
    printf("%s - %s \n", cardType(cardNum, findLength(cardNum)), validOrNot(cardNum));
}

long int findLength(long int n)
{
    int counter = 0;
    int length = 1;
    while (n > 9)
    {
        length++;
        n /= 10;
    }
    return length;
}

string validOrNot(long int n)
{
    string validOrNot;
    int counter = 1;
    int sumMultipliedDigitsByTwo = 0;
    int sumOfOtherNumebers = 0;
    while (n > 0)
    {

        if (counter % 2 == 0)
        {
            int m = (n % 10) * 2;
            if (m > 9)
            {
                while (m > 0)
                {
                    int num = m % 10;
                    m = m / 10;
                    sumMultipliedDigitsByTwo += num;
                }
            }
            else
            {

                sumMultipliedDigitsByTwo += (n % 10) * 2;
            }
        }
        else
        {
            sumOfOtherNumebers += (n % 10);
        }
        n = n / 10;
        counter++;
    }

    if ((sumMultipliedDigitsByTwo + sumOfOtherNumebers) % 10 == 0)
    {
        validOrNot = "VALID";
    }
    else
    {
        validOrNot = "INVALID";
    }

    return validOrNot;
}

string cardType(long int n, int cardLength)
{
    while (n >= 100)
    {
        n = n / 10;
    }

    string cardCompanyName;
    if ((cardLength == 15) && (n == 34 || n == 37))
    {
        cardCompanyName = "American Express";
    }
    else if ((cardLength == 16) && (n == 51 || n == 52 || n == 53 || n == 54 || n == 55))
    {
        cardCompanyName = "MasterCard";
    }
    else if ((cardLength == 16) && (n / 10 == 4))
    {
        cardCompanyName = "Visa";
    }
    else
    {
        cardCompanyName = "UNKNOWN";
    }

    return cardCompanyName;
}