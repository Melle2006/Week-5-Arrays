/*Program to print index of first repeated element of Arrays*/
#include <stdio.h>

int main() 
{
    int n, j, i;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elemnets of array: ");
    for (i=0; i<n; i++)
    scanf("%d", &a[i]);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        { 
            if (a[i]==a[j])
            {printf("Index of the first repeated element is %d\n", i);
                return 0;
            }
     }
     
    }

    return 0;
}
