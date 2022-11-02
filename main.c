#include <stdio.h>
#include <stdlib.h>


struct employee
{
    char name[10];
    int hireDate;
    float salary;
};
int main()
{
    struct employee firstOne = {"Alan", 30102022, 5000}, secondOne;

    scanf("%s %i %f", secondOne.name, &secondOne.hireDate, &secondOne.salary);

    printf("%s, %i, %.2f\n", firstOne.name, firstOne.hireDate, firstOne.salary);
    printf("%s, %i, %.2f", secondOne.name, secondOne.hireDate, secondOne.salary);

    return 0;
}
