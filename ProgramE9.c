/*To print missing element of array*/
#include <stdio.h>

int main() 
{
    int i, j, n, sum2=0, sum1;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of array: ");
    for (i=0; i<n-1; i++)
    scanf("%d", &a[i]);
    sum1=n*(n+1)/2;
    for (i=0; i<n; i++)
    sum2=sum2+a[i];
    
    printf("The missing element is %d.", sum1-sum2);

    return 0;
}
