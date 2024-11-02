/*Program to add number to Array*/
#include <stdio.h>

int main() 
{
    int n, j, i, c, b;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int a[n], d[n+1];
    printf("Enter elemnets of array: ");
    for (i=0; i<n; i++)
    scanf("%d", &a[i]);
    printf("Enter number to be added to the array: ");
    scanf("%d", &c);
    printf("Enter position to be added to: ");
    scanf("%d", &b);
    for (i=0; i<b-1; i++)
    {
        d[i]=a[i];
    }
    d[b-1]=c;
    for (j=b, i=b-1; i>=b-1 && i<n; j++, i++)
    {
        d[j]=a[i];
    }
   printf("The new array is ");
   for(i=0;i<n+1; i++)
   printf("%d ", d[i]);
    return 0;
}


    return 0;
}
