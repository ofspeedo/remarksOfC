#include <stdio.h>
#include <stdlib.h>

int main()
{
    float weatherData[5][12] = {
    {2.3, 2.6, 2.4, 2.9, 1.2, 4.0, 2.3, 2.6, 2.4, 2.9, 1.2, 4.0},
    {1.2, 4.0, 2.3, 2.6, 2.4, 2.9, 1.2, 4.0, 2.3, 2.6, 2.4, 2.9},
    {3.0, 2.3, 2.6, 2.4, 2.9, 1.2, 3.0, 2.3, 2.6, 2.4, 2.9, 1.2},
    {1.2, 4.0, 2.3, 2.6, 2.4, 2.9, 1.2, 4.0, 2.3, 2.6, 2.4, 2.9},
    {3.0, 2.3, 2.6, 2.4, 2.9, 1.2, 3.0, 2.3, 2.6, 2.4, 2.9, 1.2}
    };

    int months = 12;
    int years = 5;
    float sumYear[5];
    float sumMonth;
    float averageMonth[12];
    float averageAllYear = 0.0f;

    int i, j;

    printf("year \t\t rainfall inches\n");

    for (i = 0; i < years; i++)
    {
        for (j = 0; j < months; j++)
        {
            sumYear[i] += weatherData[i][j];
        }

        averageAllYear += sumYear[i]/(months*years);
        printf("%i \t\t %.2f\n", i+2011, sumYear[i]/months);
    }

    printf("and average for all years are %.2f\n\n", averageAllYear);

    printf("the monthly average is:\n");
    printf("Jan\t Feb\t Mar\t Apr\t May\t Jun\t Jul\t Aug\t Sep\t Oct\t Nov\t Dec\t \n");

    for (j = 0; j < months; j++)
    {
        sumMonth = 0;

        for (i = 0; i < years; i++)
        {
            sumMonth += weatherData[i][j];
        }

        averageMonth[j] = sumMonth/years;

        printf("%.2f\t ", averageMonth[j]);
    }

    return 0;
}
