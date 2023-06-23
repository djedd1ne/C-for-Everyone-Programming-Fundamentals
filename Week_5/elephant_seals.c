#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double ft_average(int size, int *mat)
{
    int i;
    double sum;

    sum = 0.0;
    for (i = 0; i < size; i++)
        sum += mat[i];
    return (sum / 1000.0);
}

int main(void)
{
    int row;
    int col;
    int *mat;
    FILE *fptr; // file pointer
    int i;
    int j;

    row = 50;
    col = 20;
    mat = malloc(row * col * sizeof(int));
    fptr = fopen("data.txt", "r");
    if (fptr == NULL)
        return (-1); // if file doesn't exist or no permission
    for (i = 0; i < row * col ; i++)
    {    
        if (!fscanf(fptr, "%d", &mat[i]))
                break;
        printf("%d\t", mat[i]);
        if (i == row * col - 1)
            printf("\n");
    }
    printf("Average of Elephant seal is : %.2f\n", ft_average(row * col, mat));
    fclose(fptr);
    free(mat);
    return (0);
}
