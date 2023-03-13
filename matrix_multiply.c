#include <stdio.h>

int main()
{
    int i, j, row1, col1, row2, col2;

    printf("Enter the number of rows in the first matrix: ");
    scanf("%d", &row1);

    printf("Enter the number of columns in the first matrix: ");
    scanf("%d", &col1);

    int array1[row1][col1];

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("Enter element %d %d: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    printf("---------------------\n");

    printf("Enter the number of rows in the second matrix: ");
    scanf("%d", &row2);

    printf("Enter the number of columns in the second matrix: ");
    scanf("%d", &col2);

    int array2[row2][col2];

    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("Enter element %d %d: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    printf("---------------------\n");

    int multipliedMatrix[row1][col2];

    int k;

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            multipliedMatrix[i][j] = 0;

            for (k = 0; k < col1; k++)
            {
                multipliedMatrix[i][j] += (array1[i][k] * array2[k][j]);
            }
        }
    }

    printf("The multiplied matrix is: \n");

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d\t", multipliedMatrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}