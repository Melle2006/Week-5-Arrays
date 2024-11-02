/*Program to print ceiling of Array*/
#include <stdio.h>

int main() 
{
    int n, j, i, t, m;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elemnets of array: ");
    for (i=0; i<n; i++)
    scanf("%d", &a[i]);
    
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n-1; j++)
        {
            if (a[j]>a[j+1])
            {
               t=a[j];
               a[j]=a[j+1];
               a[j+1]=t;
            }
        }
    
    }
    printf("Enter number: ");
    scanf("%d", &m);
    for(i=0; i<n; i++)
    {
        if (m<=a[i])
        {printf("The celing of %d is %d.", m, a[i]);
        break;}
       
        
    }

    return 0;
}


    return 0;
}
