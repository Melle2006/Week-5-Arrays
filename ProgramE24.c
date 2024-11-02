/*Program to print transpose of matrix*/
#include <stdio.h>

int main() 
{
    int i, j, t, n, m;
    printf("Enter number of rows in matrix A: ");
    scanf("%d", &m);
    printf("Enter number of coloums in matrix A: ");
    scanf("%d", &n);
    int a[m][n], c[n][m];
    printf("Enter elements of matrix A row wise: ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        scanf("%d", &a[i][j]);
    }

    { for(i = 0; i < m; i++) {
            for(j = 0; j < n; j++) 
                c[j][i] = a[i][j];
            }
        }
        
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        printf("%d ", c[i][j]);
        printf("\n");
    }
        return 0;
}


    return 0;
}
