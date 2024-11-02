/*Program to print first non-repeated element of Arrays*/
#include <stdio.h>

int main() 
{
    int n, j, i;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int a[n], b[1000]={0};
    printf("Enter elemnets of array: ");
    for (i=0; i<n; i++)
    scanf("%d", &a[i]);
    for(i=0; i<n; i++)
    {
            b[a[i]]++;
     
    }
    for (i=0; i<n; i++)
    {
        if ( b[a[i]]==1)
        {printf("The first non repeating element is %d.", a[i]);
        return 0;}
    }

    return 0;
}

