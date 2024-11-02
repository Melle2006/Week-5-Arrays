/*Program to print odd and even elements of Array*/
#include <stdio.h>

int main() 
{
    int n, j, c1=0, c2=0, i;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int a[n], b[1000]={0}, c[1000]={0};
    printf("Enter elemnets of array: ");
    for (i=0; i<n; i++)
    scanf("%d", &a[i]);
    
    for (i=0, j=0; i<n; i++)
    {
        if (a[i]%2==0)
        { b[c1]=a[i];
        c1++;
        }
        else
       { c[c2]=a[i];
       c2++;
       }
    }
    printf("The even array is ");
    for (i=0; i<c1; i++)
    printf ("%d ", b[i]);
    printf("The odd array is ");
    for (i=0; i<c2; i++)
    printf ("%d ", c[i]);
   
    return 0;
}


    return 0;
}
