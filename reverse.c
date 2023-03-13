#include <stdio.h>

int main()
{
    int num, reverse = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        reverse = (reverse * 10) + rem;
        num /= 10;
    }
    printf("Reverse Number: %d", reverse);
    
    return 0;
}