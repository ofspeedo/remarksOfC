#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b); //find the greatest common divisor among a and b
float absoluteValue(float x); //find the absolute value of x
float squareRoot(float y); //calculate the square root of y

int main()
{
    int gcdResult = 0;

    gcdResult = gcd(100, 25);
    printf("the gcd of 100 and 25 is %i\n\n", gcdResult);


    float ab[4] = {-3.66, -92.65, -42.397, -99};

    for (int i = 0; i < 4; i++)
    {
        printf("the absolute value of %.2f is %.2f\n", ab[i], absoluteValue(ab[i]));
    }


    float sq[5] = {16, 25, 225, 100, 90};
    int j = 0;

    while(j < 5)
    {
        printf("\nthe square root of %.2f is %.2f\n", sq[j], squareRoot(sq[j]));

        j++;
    }

    return 0;
}

int gcd(int a, int b)
{
    int t;
    while (b != 0)
    {
        t = a % b;
        a = b;
        b = t;
    }
       return a;
}

float absoluteValue(float x)
{
    if (x < 0)
        x = -x;

    return x;
}

float squareRoot(float y)
{
    const float epilon = .00001;
    float guess = 1.0;
    float returnValue = 0.0;

    if (y < 0)
    {
        printf("Nagetive argument to square root.\n");
        returnValue = -1.0;
    }

    else
    {
        while (absoluteValue(guess * guess - y) >= epilon)
        guess = (y / guess + guess) / 2.0;

        returnValue = guess;
    }

    return returnValue;

}
