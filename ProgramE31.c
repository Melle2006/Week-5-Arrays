/*Program ro check if given array can be divided into pairs such that sum of every pair is divisible by k*/
#include <stdio.h>

int main() 
{
    int n, i, j, k;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elemnets of array: ");
    for (i=0; i<n; i++)
    scanf("%d", &a[i]);
    printf("Enter number to check divisibilty: ");
    scanf("%d", &k);
    for(i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if((a[i]+a[j])%k!=0)
            printf("False\n");
            return 0;
        }
    }
    printf("True");

    return 0;
}


    return 0;
}
