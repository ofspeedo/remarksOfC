#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int prime[50];
    int k = 2;
    bool isPrime;
    prime[0] = 2;
    prime[1] = 3;

    for (int i = 5; i <= 100; i = i+2)
    {
        isPrime = 1;
        for (int j = 1; isPrime && i/prime[j]>=prime[j]; j++)
        {
            if (i % prime[j] == 0)
                isPrime = 0;

            if (isPrime == 1)
            {
                prime[k++] = i;
            }
        }
    }

    for (int index = 0; index < k; ++index)
    {
        printf("%i\n", prime[index]);
    }


    return 0;
}
