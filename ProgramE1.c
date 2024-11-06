/*Program to find min, max and avg in unsorted array*/
#include <stdio.h>

int main() 
{
    int n, i, j, sum, max, min, avg, t;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of array: ");
    for (i=0;i<n;i++)
    scanf("%d", &a[i]);
    
    for (i=0; i<n; i++)
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
    printf("The minimum number is %d.", a[0]);
    printf("The maximum number is %d.", a[n-1]);
    
    for (i=0; i<n; i++)
    sum = sum+a[i];
    printf("The avg of elements of array is %d.", sum/n);

    return 0;
}

