#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 1, n3, num;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("%d\n%d\n", n1, n2);   // printing 0 and 1
    for (int i = 2; i < num; ++i) // loop starts from 2 because 0 and 1 are already printed
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;

        printf("%d\n", n3);
    }

    return 0;
}