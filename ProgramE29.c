/*Program to print number of distinct absolute values in Array*/
#include <stdio.h>

int main() 
{
    int n, i, c=0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int a[n], b[1000]={0};
    printf("Enter elemnets of array: ");
    for (i=0; i<n; i++)
    scanf("%d", &a[i]);
    
    for(i=0; i<n; i++)
    {
    if (a[i]<0)
    a[i]=-(a[i]);
        b[a[i]]=1;
    }
    for(i=0; i<1000; i++)
    {
        if (b[i]==1)
        c++;
    }
    printf("Number of distinct absolute values among the elements of the array is %d.", c);

    return 0;
}


    return 0;
}
