#include <stdio.h>

void prime(int);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    prime(num);

    return 0;
}

void prime(int num)
{
    int flag = 0;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not a prime number.", num);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("%d is a prime number.", num);
    }
}