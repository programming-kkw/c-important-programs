#include <stdio.h>
int main()
{
    int NROWS = 10;
    int NCOLS = 10;
    for (int r = 1; r <= NROWS; r++)
    { // Loop through rows
        for (int c = 1; c <= NCOLS; c++)
        { // Loop through columns
            printf("%d", r * c);
            printf("\t");

            // No newline in the middle of a row

        }             // End of loop through columns
        printf("\n"); // One newline at the end of each row
    }                 // End of loop through rows
}

// Thanks to Vedant Agrawal for this code!