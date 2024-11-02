/*Program to print frequency of element in array*/
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
    for(i=0; i<n; i++)
    {
        if (b[i]>0)
       printf("The elemnt %d has frequency %d.\n", a[i], b[a[i]]);
    }
   
    return 0;
}


    return 0;
}
