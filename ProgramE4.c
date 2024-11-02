/*Program to reverse array elements*/
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
    
    for (i=0; i<n/2; i++)
    {
        t=a[n-i-1];
        a[n-i-1]=a[i];
        a[i]=t;
    }
    printf("The new array is ");
    for(i=0;i<n;i++)
    printf("%d ", a[i]);

    return 0;
}

