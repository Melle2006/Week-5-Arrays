/*Program to find the kth largest and kth smallest elements in an array*/
#include <stdio.h>
int main()
{
	   int k, n, i, j, t;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of array: ");
    for (i=0; i<n; i++)
    scanf("%d", &a[i]);
    printf("Enter a rank: ");
    scanf("%d", &k);
    for (i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    printf("The %dth term from the beginning is %d and the %dth term from the end is %d.", k, a[k-1], k, a[n-k] );

    return 0;
}

