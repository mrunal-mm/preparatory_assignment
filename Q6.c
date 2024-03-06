#include <stdio.h>

void acceptValues(int arr[3][3]);
void displayMatrix(int arr[3][3]);
void multiply(int a[3][3], int b[3][3], int c[3][3]);

int main(void)
{
    int a[3][3], b[3][3], c[3][3];

    printf("\nEnter first matrix values:\n");
    acceptValues(a);
    printf("\nEnter second matrix values:\n");
    acceptValues(b);

    multiply(a, b, c);
    printf("\nFirst matrix:\n");
    displayMatrix(a);
    printf("\nSecond matrix:\n");
    displayMatrix(b);
    printf("\nResult of matrix multiplication:\n");
    displayMatrix(c);

    return 0;
}

void acceptValues(int arr[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void displayMatrix(int arr[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
}

void multiply(int a[3][3], int b[3][3], int c[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j]=0;
            for (int k = 0; k < 3; k++)
            {
              c[i][j]+=a[i][k]*b[k][j];
            }
            
        }
    }
}