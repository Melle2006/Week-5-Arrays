/*Program to print 2-d matrix*/
#include <stdio.h>

int main() 
{
    int i, j, n, m;
    printf("Enter number of rows in matrix: ");
    scanf("%d", &m);
    printf("Enter number of coloums in matrix: ");
    scanf("%d", &n);
    int a[m][n];
    printf("Enter elements of matrix row wise: ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        scanf("%d", &a[i][j]);
    }
    printf("The matrix is \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}



    return 0;
}
