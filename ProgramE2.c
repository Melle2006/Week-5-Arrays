/*To sort elements of array in descedning order*/
#include <stdio.h>
int main()
{
	int n, i, j, t;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of array: ");
    for (i=0; i<n; i++)
    scanf("%d", &a[i]);
    
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
    printf("The array in descending order is ");
    for(i=0;i<n;i++)
    printf("%d ", a[i]);

    return 0;
}

