#include <stdio.h>
int main()
{
    int row, col;

    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int mat[row][col], mat2[row][col], sum[row][col];

    printf("Enter elements of 1st matrix:\n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }

    // adding two matrices
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = mat[i][j] + mat2[i][j];
        }

    // printing the result
    printf("\nSum of two matrices: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", sum[i][j]);
        }

        printf("\n");
    }

    return 0;
}