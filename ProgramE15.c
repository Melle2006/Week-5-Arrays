/*Program to print majority element in Array*/
#include <stdio.h>

int main() 
{
    int n, j, i, sum;
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
        if (b[a[i]]>n/2)
        {printf("%d is in majority.", a[i]);
        return 0;}
    }
    printf("No majority element found.\n");
    return 0;
}


    return 0;
}
