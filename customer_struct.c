#include <stdio.h>
struct customer
{
    char name[20];
    double mobile;
    char gen[20];
    char city[20];
};
int main()
{
    struct customer s[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the name of the customer: ");
        scanf("%s", s[i].name);
        printf("Enter the mobile number: ");
        scanf("%lf", &s[i].mobile);
        printf("Enter the gender: ");
        scanf("%s", s[i].gen);
        printf("Enter the city: ");
        scanf("%s", s[i].city);
        printf("----------------------------------------------- \n");
    }
    printf("Name\t\tMobile number\t\tGender\t\tCity \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s \t\t", s[i].name);
        printf("%.0f \t\t", s[i].mobile);
        printf("%s \t\t", s[i].gen);
        printf("%s \t\t", s[i].city);
        printf("\n");
    }
    return 0;
}

// Thanks to Vedant Agrawal for this code.