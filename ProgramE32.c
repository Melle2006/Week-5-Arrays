/*Program to check if each average exists in array*/
#include <stdio.h>

int main() 
{
    int n, i, j, k;
    float avg;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int a[n], b[1000]={0};
    printf("Enter elemnets of array: ");
    for (i=0; i<n; i++)
    scanf("%d", &a[i]);
    printf("Enter number: ");
    scanf("%d", &k);
    for (i = 0; i < n; i++)
    {avg = (float)(a[i] + k) / 2;
        for (j=0; j<n; j++)
      {if (avg==a[j])
          b[i]++;
      }
    }
    for (i=0; i<n; i++)
    printf("%d\n", b[i]);

    return 0;
}



    return 0;
}
