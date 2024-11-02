/*Program to print sum of 2 matrices*/
#include <stdio.h>

int main() 
{
    int i, j, n1, n2, m1, m2;
    printf("Enter number of rows in matrix A: ");
    scanf("%d", &m1);
    printf("Enter number of coloums in matrix A: ");
    scanf("%d", &n1);
    int a[m1][n1];
    printf("Enter elements of matrix A row wise: ");
    for(i=0; i<m1; i++)
    {
        for(j=0; j<n1; j++)
        scanf("%d", &a[i][j]);
    }
    printf("Enter number of rows in matrix B: ");
    scanf("%d", &m2);
    printf("Enter number of coloums in matrix B: ");
    scanf("%d", &n2);
    int b[m2][n2], c[m1][n1];
    printf("Enter elements of matrix B row wise: ");
    for(i=0; i<m2; i++)
    {
        for(j=0; j<n2; j++)
        scanf("%d", &b[i][j]);
    }
    if(m1==m2 && n1==n2)
    { printf("The sum of the matrices is \n");
       for(i=0; i<m1; i++)
    {
        for(j=0; j<n1; j++)
        c[i][j]=a[i][j]+b[i][j];
    } 
    for(i=0; i<m1; i++)
    {
        for(j=0; j<n1; j++)
        printf("%d ", c[i][j]);
        printf("\n");
    }
    }
    else
    printf("Sum of given matrices is not possible.");

    return 0;
}



    return 0;
}
